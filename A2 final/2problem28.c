#include <stdio.h>
int main ()
{int a, b, c;
printf("the value of sidea of triangle ->> ");
scanf("%d %d %d",&a,&b,&c);
if ( (a+b>c)&&(b+c>a)&&(c+a>b))
{
  printf("this is a triangle");
}
else 
{
    printf("this is not a triangle");
}

    
    

    return 0;
}/*Take input the measurement of three sides (integer) of a triangle and check whether the triangle is valid or not 
(sum of any two sides must be greater than the third side)

*/