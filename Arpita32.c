#include <stdio.h>
#include<string.h>
int main() {
    //WAP to compare two strings (using string.h).
    char str1[20],str2[20];
printf("Enter the 1st string:");
gets(str1);
printf("Enter the 2nd string:");
gets(str2);
if(strcmp(str2,str1)==0)
{
    printf("Strings are equal");
}
else
{
    printf("Strings are not equal");
}
    return 0;
}