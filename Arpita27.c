#include <stdio.h>
int main() {
    //WAP to multiply to matrices of order m x n.
    int ar1[20][20],ar2[20][20],i,j,m1,m2,n1,n2,mul[20][20],sum,k;
    printf("Enter number of rows and columns of 1st matrix:");
    scanf("%d%d",&m1,&n1);
    printf("Enter number of rows and columns of 2nd matrix:");
    scanf("%d%d",&m2,&n2);
    if(n1!= m2)
    {
        printf("Multiplication is not possible");
    }
    else
    {
     printf("Enter elements of 1st matrix:");
     for (i=0; i <m1; i++)
     {
         for (j = 0; j < n1; j++)
         {
             scanf("%d",&ar1[i][j]);
         }
        
     }
     printf("Enter elements of 2nd matrix:");
     for ( i = 0; i <m2; i++)
     {
         for (j = 0; j < n2; j++)
         {
             scanf("%d",&ar2[i][j]);
         }
        
     }
     for ( i = 0; i <m1; i++)
     {
        for ( j = 0; j < n2; j++)
        {
            sum=0;
            for ( k = 0; k < n1; k++)
            {
                sum+=ar1[i][j]*ar2[i][j];
                mul[i][j]=sum;
            }
            
        }
        
     }
     printf("Elements of 1st matrix is:\n");
 for ( i = 0; i < m1; i++)
 { 
    for (j = 0; j < n1; j++)
    {
        printf("%d ",ar1[i][j]);
    }
    printf("\n");
 }
 printf("\nElements of 2nd matrix is:\n");
 for ( i = 0; i < m2; i++)
 { 
    for (j = 0; j < n2; j++)
    {
        printf("%d ",ar2[i][j]);
    }
    printf("\n");
 }
printf("\nMultiplication of 2 matrix is:\n");
 for ( i = 0; i < m1; i++)
 { 
    for (j = 0; j < n2; j++)
    {
        printf("%d ",mul[i][j]);
    }
    printf("\n");
 }

    }
    return 0;
}