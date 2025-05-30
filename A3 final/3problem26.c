#include <stdio.h>
int main ()
{int c,a,d=0;
double avg;
for(c=1;c<=100;c++)
{
    scanf("%d",&a);
    d=d+a;
    

}
avg = d/100;
printf("%.2lf",avg);

    return 0;
}/*Write a C program to take a hundred integers as
 input using scanf() and output the average of them in
  decimal up to two decimal points.
*/