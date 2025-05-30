/*Write a C program to print all the divisors/factors of a number.*/
#include <stdio.h>
int main ()
{int a,c;
scanf("%d",&a);
for(c=1;c<=a;c++)
{
    if (a%c==0)
    {
        printf("%d\n",c);
    }

}
    return 0 ;
}