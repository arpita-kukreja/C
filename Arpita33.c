#include <stdio.h>
#include<string.h>
int main() {
    //WAP to reverse input string (using string.h).
     char str1[20],str2[20];
printf("Enter the 1st string:");
gets(str1);
strcpy(str2,str1);
strrev(str1);
printf("original string is %s\n",str2);
printf("Reverse string is %s",str1);

    return 0;
}