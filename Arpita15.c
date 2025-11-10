# include<stdio.h>

int main() 
{
    int n, sum=1,num=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(int i=0;i<n-1;i++)
    {
        sum=sum+i;
        num=num+sum;
    }
    printf("Sum of series is %d",num);
    return 0;
}