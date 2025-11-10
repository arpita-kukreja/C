#include <stdio.h>
int main() {
    //WAP to add and subtract a matrix of order m x n from another matrix of same order.
    int ar1[20][20], ar2[20][20],i,j,m,n,add[20][20];
    printf("Enter number of rows and columns of matrix:");
    scanf("%d%d",&m,&n);
    printf("Enter elements of 1st matrix:");
    for (i=0; i <m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d",&ar1[i][j]);
        }
        
    }
    printf("Enter elements of 2nd matrix:");
    for ( i = 0; i <m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d",&ar2[i][j]);
        }
        
    }
   for ( i = 0; i < m; i++)
   {
     for (j = 0; j < n; j++)
     {
        add[i][j]=ar1[i][j]+ar2[i][j];
        
     }
     
   }
   printf("Elements of 1st matrix is:\n");
 for ( i = 0; i < m; i++)
 { 
    for (j = 0; j < n; j++)
    {
        printf("%d ",ar1[i][j]);
    }
    printf("\n");
 }
 printf("\nElements of 2nd matrix is:\n");
 for ( i = 0; i < m; i++)
 { 
    for (j = 0; j < n; j++)
    {
        printf("%d ",ar2[i][j]);
    }
    printf("\n");
 }
printf("\nAddition of 2 matrix is:\n");
 for ( i = 0; i < m; i++)
 { 
    for (j = 0; j < n; j++)
    {
        printf("%d ",add[i][j]);
    }
    printf("\n");
 }
 
    
    return 0;
}