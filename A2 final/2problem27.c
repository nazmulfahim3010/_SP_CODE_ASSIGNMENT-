#include <stdio.h>
int main ()
{
    int a ,b, c;
    printf("Enter three sides of triangle ->> ");
    scanf("%d \n %d \n %d",&a,&b,&c);
    int d1=a+b;
    int d2 = a+c;
    int d3= c+b;
if(a+b>c&&b+c>a&&c+a>b)

{

    if (a==b && b==c && c==a)
    {
        printf("the triangle is equilateral ");
    }
    
    else if ((b==c)||(a==b)||(c==a) )
    {
        printf("the triangle is isosceles");
    }
    else {
       printf("the triangle is scalene");
    }
}
else {
    printf("not a triangle");
}
    return 0;
}/*Take input the sizes of three sides of a triangle and check whether the triangle is equilateral, scalene, or isosceles. 
(equilateral means all sides are equal, isosceles means two sides are equal, scalene means all three sides are of different size)

*/