#include <stdio.h>
int main ()
{int a;
scanf("%d",&a);
if (a%7==0 && a%8==0)
{
    printf("divisiable by 7 and 8 ");
}
else 
{

    printf("not divisable by 7 and 8 ");
}


    return 0;
}/*Take an integer input and check if the number is a multiple of both 7 and 8.*/