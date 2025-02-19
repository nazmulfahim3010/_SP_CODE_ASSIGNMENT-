#include<stdio.h>
int main()
{int a,b;
scanf("%d%d",&a,&b);
int sum = a+b;
int sub = a-b;
int pro = a*b;
printf("%d + %d = %d\n%d -%d = %d\n%d x%d = %d",a,b,sum,a,b,sub,a,b,pro);
    return 0;
}/*Take two integers as input (use scanf) and execute addition, subtraction, and multiplication operations between them. Output the result in each case in the following format:
6 + 8 = 14
6 - 8 = -2
6 x 8 = 48
*/