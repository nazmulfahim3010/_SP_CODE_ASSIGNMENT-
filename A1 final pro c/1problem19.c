#include<stdio.h>
int main ()
{double  r ,h;
scanf("%lf %lf",&r,&h);
double v = (3.1416 *r*r)*h;
printf("%.3lf",v);

return 0;
}/*Take input the radius and height of a cylinder and find the volume of it. (formula: r2h)
*/