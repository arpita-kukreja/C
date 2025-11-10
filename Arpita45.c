//WAP to create a user defined data type named date using Union.
#include<stdio.h>
union Date{
  int day;
  int month;
  int year;
  };
int main()
{
    union Date mydob;
    do{
      printf("Enter your Day of birth:");
      scanf("%d",&mydob.day);
      }while(mydob.day>31 || mydob.day<1);
    printf("You were born on day %d",mydob.day); 
     do{
      printf("\nEnter your month of birth:");
      scanf("%d",&mydob.month);
      }while(mydob.month<1 || mydob.month>12);
      printf("You birth month is %d",mydob.month); 
     do{
      printf("\nEnter your year of birth:");
      scanf("%d",&mydob.year);
      }while(mydob.year<1920 || mydob.month>2023);
      printf("You were born in lucky year %d",mydob.year);
      printf("\nDay month and year values together taken in union gives %d-%d-%d",mydob.day,mydob.month,mydob.year);
        return 0;
}