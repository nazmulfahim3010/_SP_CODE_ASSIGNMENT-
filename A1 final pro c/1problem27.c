#include<stdio.h>
int main ()
{
int a, last_number;
printf("enter a two digit integer ;)");
scanf("%d",&a);
last_number = a%10;
printf("%d",last_number);

    return 0;
}/*Take a two-digit integer as input and print the last digit.*/