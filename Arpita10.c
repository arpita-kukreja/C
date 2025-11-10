# include<stdio.h>

int main() 
{
    int x,y, z;
  printf("Enter the age of three persons\n");
  scanf("%d\n%d\n%d",&x,&y,&z);
  if(x<y && x<z) 
  printf("1st person is youngest");
  else
  {
   if(y<x && y<z)
   printf("2nd person is youngest");
   else
   printf("3rd person is youngest");
}

    return 0;
}