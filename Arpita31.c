#include <stdio.h>
#include<string.h>
int main() {
    //WAP to copy one string to another string.
char x[20],y[20];
printf("Enter the string:");
gets(x);
strcpy(y,x);
printf("Copied string is %s",y);
    return 0;
}