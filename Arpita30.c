#include <stdio.h>
#include <string.h>
int main() {
    //Write a program find the length of the string using string.h .
char x[20];
int len;
printf("Enter the string:");
gets(x);
len=strlen(x);
printf("Length of string is %d.",len);
    return 0;
}