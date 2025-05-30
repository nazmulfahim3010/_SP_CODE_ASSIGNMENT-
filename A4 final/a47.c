/*Write a C program to print the multiples of a given number up to 1000.
*/
#include <stdio.h>
int main ()
{int a,c;
scanf("%d",&a);
for (c=1;c<=1000;c++)
{
    if(c%a==0)
    {
        printf("%d\n",c);
    }
  
}
    return 0;
}