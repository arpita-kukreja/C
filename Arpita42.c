#include <stdio.h>
//WAP to create a recursive function to display Fibonacci series.

int fibonacci(int num)
{
    
    if (num == 0)
    {
        return 0; 
    }
    
    else if (num == 1)
    {
        return 1; // returning 1, if condition meets
    }
    

    else
    {
        return (fibonacci(num - 1) + fibonacci(num - 2)); 
    }
}

int main()
{
    int num, i; 
    printf("Enter the number of elements to be in the series : ");
    scanf("%d", &num); 
    
    for (i = 0; i < num; i++)
    {
        printf("%d, ", fibonacci(i)); // calling fibonacci() function for each iteration and printing the returned value
    }

    return 0;
}