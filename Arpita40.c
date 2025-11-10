#include <stdio.h>
int main() {
    /*WAP to create a pointer to integer variable and apply integer addition and subtraction on this pointer. Through the program 
display the value of the integer variable, pointer to this integer 
variable and also the values of this pointer variable after applying 
operations.*/
int num,n;
int *ptr=&num;
printf("Enter the number:");
scanf("%d",&num);
printf("Value of num is %d\n",num);
printf("Value of pointer to num is %d\n",ptr);
printf("Enter the number to add or subtract from the pointer:");
scanf("%d",&n);
printf("Value of pointer variable after adding %d is %d\n",n,ptr+n);
printf("Value of pointer values after subtracting %d  is %d\n",n,ptr-n); 
    return 0;
}