#include <stdio.h>

int main()
 {
  // Open the source file in read mode.
  FILE *f1,*f2;
  char c;
  f1=fopen("document.txt","r");
  f2=fopen("data12.txt","w");
  if (f1 == NULL || f2==NULL) {
    printf("Error opening source file.\n");
    return 1;
  }

  // Open the destination file in write mode.
  while((c= fgetc(f1)) != EOF){
         fputc(c, f2);
         }
    fclose(f1);
    fclose(f2);
    printf("Contents copied successfully.\n");
    return 0;
  }

  /*Copy the contents of the source file to the destination file.
  char character;
  while ((character = fgetc(source_file)) != EOF) {
    fputc(character, destination_file);
  }

  // Close the source and destination files.
  fclose(source_file);
  fclose(destination_file);

  return 0;
}*/

