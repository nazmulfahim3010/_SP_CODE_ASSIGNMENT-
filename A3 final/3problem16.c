#include<stdio.h>
int main()
{int c,a;
scanf ("%d",&a);
for (c=2;c<=a;c+=2)
{
    printf("%d",c);
    if ( c>=2 && c<=(a-1))
    {
        printf(",");
    }
}
    return 0;
}/*Write a C program to print the following series:
 2, 4, 8, 16, ……*/