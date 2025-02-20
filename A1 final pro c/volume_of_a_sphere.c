#include<stdio.h>
int maion (){
double r;
scanf("%lf",&r);
double v = (4*3.1416*r*r*r)/3;
printf("%.3lf",v);
    return 0 ;
}/*Take input the radius of a sphere and find the area of it. (formula: 4r3/3)
*/