#include<stdio.h>
int main()
{int c,a,d=0;
for(c=1;c<=10;c++)
{
    scanf("%d",&a);
   
    if(a>d)
    {
        d=a;
    }
}
printf("%d",d);
    return 0;
}/*Write a C program to take a hundred integers as 
input using scanf() and output the largest of them.
*/