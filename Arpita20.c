#include <stdio.h>
int main() {
    /*WAP in C to display multiplication table of a number up to 30 multiples. First 10 multiples 
must be displayed with the help of for loop, second 10 multiples must be displayed with the 
help of while loop and last 10 multiples must be displayed with the help do while loop.*/
int n,i;
printf("Enter the number\n");
scanf("%d",&n);
for(i=1;i<=10;i++)
 {
    printf("%dX%d=%d\n",n,i,n*i);
 }
 while(i>10,i<=20)
  {
    printf("%dX%d=%d\n",n,i,n*i);
    i++;
  }
  do
  {
    printf("%dX%d=%d\n",n,i,n*i);
    i++;
    
  } while (i>20,i<=30);
  
    return 0;
}