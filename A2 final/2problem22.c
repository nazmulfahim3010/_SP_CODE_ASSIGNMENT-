# include <stdio.h>
int main ()
{int m,y;
scanf("%d%d",&m,&y);
if(m>=1&&m<=12)
{
     if(y%100!=0 && (y%400==0||y%4==0))
    {
        if (m==1||m==3||m==5||m==7||m==8||m==10||m==12)
   {
    printf("31 days");
   
   }
       
   else  if (m==4||m==6||m==9|m==11)
    {
        printf("30 days");
    }
   else 
   {
    printf("29 days");
   }
    }
   else 
   {
     if (m==1||m==3||m==5||m==7||m==8||m==10||m==12)
   {
    printf("31 days");
   
   }
       
   else  if (m==4||m==6||m==9|m==11)
    {
        printf("30 days");
    }
   else 
   {
    printf("28 days");
   }
     

   }
   



}
else 
{
    printf("invalid month value");
}
    return 0;
}/*Write a C program that takes a month number (1-12) and a year as input and prints the number of days in the month. Handle leap years for February.

Input: 2 2024
Output: 29*/
