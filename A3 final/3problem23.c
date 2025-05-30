#include<stdio.h>
int main()
{int c,a,d=0;
for(c=1;c<=100;c++)
{
    scanf("%d",&a);
    if(a%2==0)
    {
       d++; 
    }
}
printf("%d",d);
    return 0;
}/*Write a C program to take a hundred integers as input
 using scanf() and output the number of even numbers among them.*/