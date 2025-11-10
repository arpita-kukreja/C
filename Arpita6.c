# include<stdio.h>

int main() 
{
    int n,r,s=0;
    printf("Enter a 3-digit number\n");
    scanf("%d",&n);
    r=n%10;
    n=n/10;
    s+=r;
    r=n%10;
    n=n/10;
    s+=r;
    r=n%10;
    s+=r;
    printf("Sum of 3-digit number is %d",s);
    return 0;
}