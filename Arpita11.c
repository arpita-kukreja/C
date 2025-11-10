#include<stdio.h>

int main()
{
    char o;
    int x,y;
    printf("Enter operation\n");
    scanf("%c",&o);
    printf("Enter 2 numbers\n");
    scanf("%d\n%d",&x,&y);
    switch (o)
    {
     case'+':
      printf("%d%c%d=%d",x,o,y,x+y);
      break;
     case'-':
     printf("%d%c%d=%d",x,o,y,x-y);
     break;
    case'*':
    printf("%d%c%d=%d",x,o,y,x*y);
     break;
    case'/':
    printf("%d%c%d=%d",x,o,y,x/y);
     break;
    default:
    printf("Default operation");
    }
    return 0;
}