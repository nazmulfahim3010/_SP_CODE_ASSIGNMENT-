#include<stdio.h>
int main (){

 int a , last_digit;
    printf("enter a 2 digit number :)");
    scanf("%d",&a);
    last_digit = a % 10;
    int first_digit = a / 10;
    
    printf(" The units digit is %d\n The tens digit is %d",last_digit,first_digit);
    return 0 ;
}/*Take a two-digit integer as input and print the two digits separately in the following format:
The unit’s digit is 8
The ten’s digit is 5
(Let, the input number is: 58)
*/