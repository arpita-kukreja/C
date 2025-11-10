#include <stdio.h>
int main() {
    //WAP to read a file and display its contents on the console.
    
    FILE *file;
    
    char ch;

    
    
    file = fopen("Document.txt", "r");

    
    if (file == NULL) {
        printf("Error in opening file:\n");
        return 1; 
    }


    printf("Contents of the file:\n");
    while ((ch = fgetc(file)) != EOF) {
        printf("%c",ch);
    }

    
    fclose(file);

    

    return 0;
}