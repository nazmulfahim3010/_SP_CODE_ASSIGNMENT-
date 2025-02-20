#include <stdio.h>

int main() {
    float cel, far;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &cel);

    
    far = (cel * 9.0 / 5.0) + 32;

    printf("Temperature in Fahrenheit: %.2f\n", far);

    return 0;
}///Take a Celsius temperature (decimal number) as input and convert it to Fahrenheit temperature. (Look up the formula online or in your physics book)


