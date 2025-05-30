/*Write a C program to calculate the GCD/HCF of two numbers. 
Write a C program to calculate the LCM of two numbers
*/

# include <stdio.h>
int main ()
{int a,b,c,max,min,lcm;
scanf("%d%d",&a,&b);
if (a>b)
{
    max=a;
    min=b;
}
else if(b>a)
{
    max=b;
    min=a;
}
int hl=min*max;
for (c=max;c<=hl;c++)
{
    if(c%a==0&&c%b==0)
    {
        lcm = c;
        break;
    }
}
printf("lcm %d",lcm);
    return 0;
}