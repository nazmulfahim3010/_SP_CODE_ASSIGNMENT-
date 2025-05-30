#include <stdio.h>

int main() {
    double tem;
    char s;

    printf("Enter temerature : ");
    scanf("%lf %c", &tem, &s);

    if (s == 'C' || s == 'c') {
        tem = (tem * 9.0 / 5.0) + 32.0;
        printf("%.2lf F\n", tem);
    } 
    else if (s == 'F' || s == 'f') {
        tem = (tem - 32.0) * 5.0 / 9.0;
        printf("%.2lf C\n", tem);
    } 
    else {
        printf("Invalid s. Use 'C' or 'F'.\n");
    }

    return 0;
}
/*Take a tem (a decimal number) and a character signifying the s as input. If the character is C, that means the tem is in Celsius. You have to convert it to Fahrenheit. If the character is F, you have to convert it to Celsius.*/