#include <stdio.h>
int main() {
 //c. Insert an element in the array   
    int ar[10],i,n,num,pos;
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
    printf("%d ",ar[i]);
 }
 printf("\nEnter the number to insert:");
 scanf("%d",&num);
printf("Enter the index value where you want to insert number:");
scanf("%d",&pos);
for (i =n-1; i >=pos; i--)
{
        ar[i+1]=ar[i];
    
}
ar[pos]=num;
printf("Array after insertion is:");
for ( i = 0; i <=n; i++)
{
    printf("%d ",ar[i]);
}


    return 0;
}