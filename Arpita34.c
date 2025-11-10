#include <stdio.h>
#include<string.h>
int main() {
    //WAP to check whether input string is palindrome or not.
    char str1[20],str2[20];
printf("Enter the  string:");
gets(str1);
strcpy(str2,str1);
strrev(str1);
if(strcmp(str1,str2)==0)
{
    printf("The entered string is palindrome.");
}
else
{
    printf("The entered string is not palindrome");
}
    return 0;
}