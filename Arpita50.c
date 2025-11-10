#include <stdio.h>
#include<stdlib.h>
int main() {
    //WAP to count the number of characters and words in the given file.
    char ch;
    FILE *file;
    int char_count=0,int_count=0,float_count=0,words_count=0;
    file=fopen("data.txt","r");
    while((ch = fgetc(file)) != EOF)
    {
        if(ch>= '0' && ch<='9'){
        if(ch == '.')
         float_count++;
        else int_count++;
        }
        else if (ch!=' ' && ch!= '\n' && ch!='\t')
          char_count++;
        else if (ch==' ' || ch== '\n')
          words_count++;
    }
    printf("Number of words present in given file: %d\n",words_count);
    printf("Number of integers present in given file: %d\n",int_count);
    printf("Number of floats present in given file: %d\n",float_count);
    printf("Number of characters present in given file: %d",char_count);
    fclose(file);
    return 0;
}