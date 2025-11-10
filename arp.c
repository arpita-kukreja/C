#include <stdio.h>
int main() 
{
int day, month, year;
int julianDay=0;
printf("Enter day: ");
scanf("%d", &day);
printf("Enter month: ");
scanf("%d", &month);
printf("Enter year: ");
scanf("%d", &year);    
if (month < 1 || month >12)
{
   printf("Invalid month entered.\n");
}else {
    switch (month){
        case 12: julianDay += 30; //November
        case 11: julianDay += 31; //October
        case 10: julianDay += 30; //November
        case 9: julianDay += 31; //November
        case 8: julianDay += 31; //November
        case 7: julianDay += 30; //November
        case 6: julianDay += 31; //November
        case 5: julianDay += 30; //November
        case 4: julianDay += 31; //November
        case 3: julianDay += 28; //November
        case 2: julianDay += 31; //November
        case 1: julianDay += day; //November
        break;
        default:
        printf("Invalid month entered.\n");
        return 1;
    }
    if ((year % 4 == 0 && year % 100 !=0) || (year % 400 == 0))
    {
       julianDay +=1; // It's a leap year
    }
    printf("The Julian day for %02d/%02d/%04d is : %d\n", month , day, year, julianDay);

}
return 0;
}