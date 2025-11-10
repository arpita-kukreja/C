#include <stdio.h>
int main() {
 //  Search an element in the array and display its position  
  int ar[10],i,n,num,flag=0;
 printf("Enter no. of elements\n");
 scanf("%d",&n);
 printf("Enter %d element of array\n",n);
 for(i=0;i<n;i++)
  {
    scanf("%d",&ar[i]);
  }
printf("Array element are {");
for(i=0;i<n;i++)
 {
    printf("%d ",ar[i]);
 }
printf("}\n");
printf("Enter the element to search in the array\n");
scanf("%d",&num);
for(i=0;i<n;i++)
 {
   if(num==ar[i])
    {
        printf("%d is present in array at %d position",num,i+1);
        flag=1;
        break;
    }
 }
if(flag==0)
 {
    printf("%d is not present in array\n",num);
 }
    return 0;
}