#include <stdio.h>
float percent(float marks[])
{
    int i;
    float sum=0,per;
    for ( i = 0; i < 10; i++)
    {
        sum=sum+marks[i];
    }
    per=sum/10;
    return per;
    
}
int main() {
    //WAP to create a function that takes as input an array of marks of a student in 10 subjects and returns his percentage.
float ar[10];
int i;
printf("Enter the marks of 10 subjects of student:\n");
for ( i = 0; i < 10; i++)
{
    scanf("%f",&ar[i]);
}
printf("Percentage of marks in 10 subjects of student is:%f",percent(ar));

    return 0;
}