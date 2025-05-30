#include <stdio.h>
int main ()
{   int year;
printf("Enter a year-> ");
scanf("%d",&year);

 if (year%100!=0 && year %400==0)
{
    printf("leap year");
}
else if(year%100!=0 && year%4==0)
{
    printf("leap year");

}else 
{
    printf("NOT leap year");
}

    return 0;
}/*Take a year (integer) as input and check Whether the entered year is Leap Year or not. 
(If the year is divisible by 100, it MUST BE divisible by 400 to be a leap year. All other years are leap years if they are simply divisible by 4)*/