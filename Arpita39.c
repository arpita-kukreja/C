#include <stdio.h>
int greatest(int ar[])
{
    int max=ar[0],i;
    for ( i = 1; i < 10; i++)
    {
       if (ar[i]>max)
       {
         max=ar[i];
       }
       
    }
   return max; 

}
int main() {
    //WAP to return the greatest of 10 numbers in an array using a function.
    int ar[10],i;
    printf("Enter 10 numbers in array\n");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("%d is greatest of 10 numbers in an array",greatest(ar));
    return 0;
}