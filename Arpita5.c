# include<stdio.h>

int main() 
{
    int r;
    float a,c;
    printf("Enter the radius of circle:\n");
    scanf("%d",&r);
    a=(22.0/7)*r*r;
    printf("Area of circle is %f\n",a);
    c=2*(22.0/7)*r;
    printf("Circumfrence of the circle is %f\n",c);
    return 0;
}