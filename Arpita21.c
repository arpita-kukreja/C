#include <stdio.h>
int main() {
   // WAP to find maximum and minimum value of an integer array of 10 numbers.
   int arr[10],i,min,max;
   printf("Enter the 10 elements of array\n");
   for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    max=arr[0];
    for(i=1;i<10;i++)
     {
        if(arr[i]<min)
         min=arr[i];
        else if(arr[i]>max)
         max=arr[i]; 
     }
    printf("Maximun value of array is %d\n",max);
    printf("Minimum value of array is %d",min); 
    return 0;
}