#include<stdio.h>
int main()
{int c,a,sum=0,sq=1;
scanf("%d",&a);
for(c=1;c<=a;c++)
{
    sq = c*c;
    sum+=sq;
}
printf("%d",sum);
    return 0;
}/*Write a C program to calculate the sum of the following series:
 (take n as input)12+22+32+42+52+.....+n2*/