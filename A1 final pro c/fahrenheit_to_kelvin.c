#include<stdio.h>
int main (){
float f;
scanf("%d",&f);
float k = ((5*(f-92))/9)+273.15;
printf("%.2f k",k);
    return 0;
}/*Take a Fahrenheit temperature as input and convert it to Kelvin. (K= { 5(F-32)/9 } + 273.15)*/