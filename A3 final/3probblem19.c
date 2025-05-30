#include<stdio.h>
int main()
{int a,b,c,max,min;
printf("Enter  a and b where a>b\n");
printf("Enter a ->> ");
scanf("%d",&a);
printf("Enter b ->>  ");
scanf("%d",&b);
if(a<b)
{
    max=b;
    min =a;
}
else if(a>b){
max =a;
min =b;
}
for (c=min ;c<=max;c++)
{
    printf("%d\n",c);
}
    return 0;
}/*Take input two integers a and b where a>b and both are positive. Write a C program to
print all natural numbers from b to a.*//*Take input two integers a and b where both a and b are positive.
 Write a C program to print all natural numbers from 
 a to b if a <= b, or b to a if b <=a.
*/