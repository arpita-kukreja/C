#include <stdio.h>
int main() {
    //WAP to print sum of all diagonal elements of a matrix.
    int ar[10][10],i,j,n,m,sum=0;
 printf("Enter no. of rows and columns\n");
 scanf("%d%d",&m,&n);
 printf("Enter elements of array\n");
 for(i=0;i<m;i++)
  {
    for (j= 0; j < n; j++)
    {
        scanf("%d",&ar[i][j]);
    }
    
  }
printf("Array elements are \n");
for(i=0;i<m;i++)
  {
    for (j= 0; j < n; j++)
    {
        printf("%d ",ar[i][j]);
    }
    printf("\n");
  }
printf("\n");
for(i=0;i<m;i++)
  {
    for (j= 0; j < n; j++)
    {
        if(i==j)
        {
            sum=sum+ar[i][j];
        }
    } 
  }
 printf("Sum of diagonal elements of array is %d",sum);
    return 0;
}