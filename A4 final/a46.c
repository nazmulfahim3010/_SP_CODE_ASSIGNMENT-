/*Write a C program to count the number of divisors/factors of a given number.
*/
#include <stdio.h>
int main ()
{int a,c,f;
scanf("%d",&a);
for(c=1;c<=a;c++)
{
    if (a%c==0)
    {
        f++;
    }

}
printf("%d",f);
    return 0;
}