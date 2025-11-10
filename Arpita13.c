# include<stdio.h>

int main() 
{
    int month,date,year;
    
    printf("Enter date, and year\n");
    scanf("%d\n%d",&date,&year);
    int julday;
    printf("Enter month\n");
    scanf("%d",&month);
    julday=date;
    if(month>1)
     {
       switch(month-1)
        {
          case 11: julday+=30;
          case 10: julday+=31;
          case 9: julday+=30;
          case 8: julday+=31;
          case 7: julday+=31;
          case 6: julday+=30;
          case 5: julday+=31;
          case 4: julday+=30;
          case 3: julday+=31;
          case 2: julday+=28;
          case 1: julday+=31;
          break;
        default:
         printf("Invalid month entered\n");
       }
     }
    if((year%4==0 && year%100!=0)||(year%400==0))
     {
        if(month>2)
          {julday+=1;}
     }
printf("Julian Day is %d",julday);
   return 0;
  }