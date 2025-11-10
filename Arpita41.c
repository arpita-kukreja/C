//WAP to implement function call by reference for swapping two numbers
#include<stdio.h>
void swap(int*x, int*y) 
{
   int temp;
   temp=*x;
   *x=*y;
   *y=temp;
}
int main()
{
    int num1,num2;
    printf("Enter the numbers:");
    scanf("%d%d",&num1,&num2);
    printf("Before swapping: x=%d,y=%d\n",num1,num2);
    swap(&num1, &num2);
    printf("After swapping:x=%d,y=%d\n",num1,num2);
    return 0;
}