# include<stdio.h>

int main() 
{
   int a,b;
   printf("Enter two numbers\n");
   scanf("%d\n%d",&a,&b);
   printf("Numbers before swapping\na=%d and b=%d\n",a,b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("Numbers after swapping\na=%d and b=%d\n",a,b);
    return 0;
}