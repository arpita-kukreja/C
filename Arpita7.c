# include<stdio.h>

int main() 
{ 
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  if(n<0)
  printf("%d is negative",n);
  else
  {
   if(n>0)
   printf("%d is positive.",n);
   else
   printf("Number is zero.");
  }
    return 0;
}