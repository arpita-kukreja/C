#include <stdio.h>
int power(int num,int pow)
{
   int i,res=1;
    for ( i = 0; i < pow; i++)
    {
        res=res*num;
    }
    return res;
}
int main() {
    //WAP to create a function that takes number and its power as argument and return value of the number raised to this power without using math.h
int n,p;
printf("Enter the number and power:");
scanf("%d%d",&n,&p);
printf("%d raised to power of %d is: %d",n,p,power(n,p));
 return 0;
}