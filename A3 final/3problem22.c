#include<stdio.h>
int main()
{int c,a,sum=0,sq=1;
scanf("%d",&a);
for(c=1;c<=a;c++)
{
    sq = c*c*c;
    sum+=sq;
}
printf("%d",sum);
    return 0;
}/*Write a C program to print the sum of cubes of all natural numbers from 1 to n.*/