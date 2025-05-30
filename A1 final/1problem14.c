#include<stdio.h>
int main (){
double a,b,c,d,e;
scanf ("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&e);
double avg = (a+b+c+d+e)/5;
printf("%.3lf",avg);

    return 0 ;
}/*Take five floating point numbers as input and print their average in decimal (up to three decimal points).
*/