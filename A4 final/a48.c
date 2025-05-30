/*Write a C program to calculate the GCD/HCF
 of two numbers. 
*/
#include <stdio.h>
int main ()
{int a,b,c,max,min,gcd;
scanf("%d%d",&a,&b);
if (a>b)
{
   max =a;
   min =b;
}
else if (b>a)
{
    max =b;
    min= a;
}
for (c=1;c<=min;c++)
{
    if (max%c==0 && min %c == 0)
    {
        gcd = c;
    }
}
printf("%d",gcd);
    return 0;
}