# include<stdio.h>

int main()
 {
   int a,b,c;
   printf("Enter two numbers\n");
   scanf("%d\n%d",&a,&b);
   printf("Numbers before swapping\na=%d and b=%d\n",a,b);
   c=a;
   a=b;
   b=c;
   printf("Numbers after swapping are\n a=%d and b=%d\n",a,b);
    return 0;
}