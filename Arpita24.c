#include <stdio.h>
int main() {
    // Delete an element from the array
    int ar[10],i,n,num,flag=0,pos;
 printf("Enter no. of elements\n");
 scanf("%d",&n);
 printf("Enter %d element of array\n",n);
 for(i=0;i<n;i++)
  {
    scanf("%d",&ar[i]);
  }
printf("Array element are :");
for(i=0;i<n;i++)
 {
    printf("%d,",ar[i]);
 }
 printf("\nEnter the number to delete:");
 scanf("%d",&num);
 for(i=0;i<n;i++)
 {
   if(num==ar[i])
    {
        printf("%d is present in array at %d position\n",num,i+1);
        flag=1;
        pos=i;
        break;
    }
    
 }
 
 
if(flag==0)
 {
    printf("%d is not present in array\n",num);
 }
else
{
    for ( i =pos; i <n; i++)
 {
    ar[i]=ar[i+1];
 }
printf("Array after deletion is:\n");
for ( i = 0; i <n-1; i++)
 {
    printf("%d ",ar[i]);
 }
}
    printf("\n");
 
 
    return 0;
}