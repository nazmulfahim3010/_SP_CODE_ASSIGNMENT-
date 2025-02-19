#include<stdio.h>
int main (){

int a , last_digit;
    printf("enter a 2 digit number :)");
    scanf("%d",&a);
    last_digit = a % 10;
    int first_digit = a / 10;
    int new = last_digit + first_digit;
    printf("sum %d ",new);
    return 0;
}/*Take a two-digit integer as input and print the sum of the digits.*/