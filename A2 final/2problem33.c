
#include <stdio.h>

int main() {
    int u;
    float b = 0.0;

    printf("Enter the number of unites consumed: ");
    scanf("%d", &u);

    if (u <= 100) {
        b = u * 10.0;
    }
    else if (u <= 300) {
        b = (100 * 10.0) + ((u - 100) * 15.0);
    }
    else {
        b = (100 * 10.0) + (200 * 15.0) + ((u - 300) * 20.0);
    }

    if (b > 2000.00) {
        b += b * 0.10;
    }

    printf("Total electricity b: BDT %.2f\n", b);

    return 0;
}/*Write a C program to calculate the electricity b based on the following criteria:
For the first 100 u: BDT 10.00 per unit
For the next 200 u: BDT 15.00 per unit
For u above 300: BDT 20.00 per unit
Add a surcharge of 10% on the total b if it exceeds BDT 2000.00.
 */