#!/usr/bin/env python3
"""
Daily commit helper for GitHub Actions.

Behavior:
- On first run it records the list of candidate files in `.commit_state.json`.
- Each run it picks the next file from the list, stages it and commits it.
- If the file has no content changes (nothing to commit), it appends a line to `.commit_log`
  to force a commit so you get one commit per day and still mark progress.
- After processing a file, it increments the index and writes `.commit_state.json`.

Notes:
- The workflow runs this script and then the workflow pushes. The script does NOT push.
"""

from __future__ import annotations

import json
import os
import subprocess
import sys
from datetime import datetime

REPO_ROOT = os.getcwd()
STATE_FILE = os.path.join(REPO_ROOT, ".commit_state.json")
LOG_FILE = os.path.join(REPO_ROOT, ".commit_log")
IGNORE_DIRS = {".git", ".github", "scripts"}
IGNORE_FILES = {os.path.basename(__file__), os.path.basename(STATE_FILE), os.path.basename(LOG_FILE)}


def run(cmd: list[str], check=True) -> subprocess.CompletedProcess:
    return subprocess.run(cmd, check=check, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)


def gather_candidates() -> list[str]:
    files = []
    for entry in sorted(os.listdir(REPO_ROOT)):
        full = os.path.join(REPO_ROOT, entry)
        if entry in IGNORE_FILES:
            continue
        if entry in IGNORE_DIRS:
            continue
        if entry.startswith('.'):
            continue
        if os.path.isfile(full):
            files.append(entry)
    return files


def load_state() -> dict:
    if os.path.exists(STATE_FILE):
        with open(STATE_FILE, 'r', encoding='utf-8') as f:
            return json.load(f)
    files = gather_candidates()
    state = {"files": files, "index": 0}
    with open(STATE_FILE, 'w', encoding='utf-8') as f:
        json.dump(state, f, indent=2)
    return state


def save_state(state: dict) -> None:
    with open(STATE_FILE, 'w', encoding='utf-8') as f:
        json.dump(state, f, indent=2)


def main() -> int:
    state = load_state()
    files = state.get('files', [])
    if not files:
        print("No candidate files found to commit.")
        return 0

    idx = int(state.get('index', 0))
    idx = idx % len(files)
    target = files[idx]
    print(f"Selected file #{idx}: {target}")

    # Stage the target file
    try:
        run(["git", "add", target])
    except subprocess.CalledProcessError as e:
        print("git add failed:", e.stderr)
        return 1

    # Try to commit the file
    commit_msg = f"Daily: add/update {target}"
    try:
        run(["git", "commit", "-m", commit_msg])
        print(f"Committed {target}")
    except subprocess.CalledProcessError as e:
        # Nothing to commit (no changes) or other error
        stderr = (e.stderr or "").lower()
        if "nothing to commit" in stderr or "did not match any files" in stderr:
            print(f"No content changes for {target}. Appending to {os.path.basename(LOG_FILE)} to force a commit.")
            ts = datetime.utcnow().isoformat() + "Z"
            with open(LOG_FILE, 'a', encoding='utf-8') as lf:
                lf.write(f"{ts} - marked {target} as processed\n")
            try:
                run(["git", "add", os.path.basename(LOG_FILE)])
                run(["git", "commit", "-m", f"Daily: mark {target} processed (no content changes)"])
            except subprocess.CalledProcessError as e2:
                print("Failed to create marker commit:", e2.stderr)
                return 1
        else:
            print("git commit failed:", e.stderr)
            return 1

    # advance index
    state['index'] = (idx + 1) % len(files)
    save_state(state)
    print(f"Advanced index to {state['index']}")
    return 0


if __name__ == '__main__':
    sys.exit(main())
