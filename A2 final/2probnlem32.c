#include <stdio.h>
int main ()
{double h,w;
printf("enter weight -> ");
scanf("%lf",&w);
printf("entr height ->");
scanf ("%lf",&h);

double BMI = w/(h*h);
if (BMI < 18.5)
{
    printf("%.2lf underweight",BMI);
}
else if (BMI <=24.9 && BMI>=18.5)
{
    printf("%.2lf Normal weight",BMI);
}
else if (BMI <=29.9 && BMI>=25)
{
    printf("%.2lf Overweight",BMI);
}
else if(BMI>30)
{
    printf("%.2lf obese",BMI);
}

    return 0;
}/* Write a program that calculates the Body Mass Index (BMI) based on the input weight (in kilograms) and height (in meters). 
Use the formula: BMI = weight/height2

Based on the calculated BMI, print the category:
Underweight: BMI < 18.5
Normal weight: BMI 18.5–24.9
Overweight: BMI 25–29.9
Obese: BMI >= 30
Input: 70 1.75
Output: BMI = 22.86 (Normal weight)

*/