#include <stdio.h>
void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("Numbers after swapping are a= %d and b=%d",x,y);
}
int main() {
    //. WAP to swap two numbers using a void function using call by value.
    int a,b;
    printf("Enter the two numbers");
    scanf("%d%d",&a,&b);
    printf("Numbers before swapping are a=%d and b=%d\n",a,b);
    swap(a,b);
    return 0;
}