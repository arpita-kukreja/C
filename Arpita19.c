#include <stdio.h>
int main() {
    //WAP in C to store reverse of an input number in another variable, display it and check whether this input number is palindrome or not.
    int num,n,rev=0,rem;
    printf("Enter the number\n");
    scanf("%d",&num);
    n=num;
    while(num!=0)
     {
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
     }
    printf("%d is reverse of the number entered\n",rev);
    if(n==rev)
     {
        printf("%d is a palindrome number\n",n);
     }
    else
     {
        printf("%d is not a palindrome number",n);
     }
    return 0;
}

