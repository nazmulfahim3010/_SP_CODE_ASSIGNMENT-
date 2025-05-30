#include<stdio.h>
int main()
{
    int a , b,c;
    printf("Enter angle ->> ");
    scanf("%d %d %d",&a,&b,&c);
    if ( (a+b+c)==180)
    {
        printf("this is a triangle");
    }
    else{
        printf("this not a triangle");
    }

return 0;
}/*Take input the measurement of three angles (integer) of a triangle and check
whether the triangle is valid or not (sum of three angles must be 180)*/