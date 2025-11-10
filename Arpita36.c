#include <stdio.h>

    int greater(int x,int y ,int z)
    {
        if(x>y && x>z)
         return x;
        else if (y>x && y>z)
        {
            return y;
        }
        else
        return z;
         
    }
    int main() {
    //WAP which makes use of a user defined function that returns the greatest of three numbers.
    int a,b,c,d;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    d=greater(a,b,c);
    printf("Greatest of three number is %d",d);
    return 0;
}