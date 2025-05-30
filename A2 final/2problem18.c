#include <stdio.h>
int main (){
 double a,b ;
    char c;
    
    scanf("%lf%lf\n",&a,&b);
    scanf ("%c",&c);
 
    if (c =='+')
    {
    int q= a +b;
    printf("sum is %d",q);
    }
    else if ( c == '-')
    {
    int w = a - b;
    printf("diffrence is %d",w);
    }
    else if ( c == '*')
    {
        int e = a *b;
        printf("product is %d",e);
    }
    else if ( c == '/')
    {
        double t = a/b;
        printf("quotient is %.2lf",t);
    }
    else 
    {
        printf("character not difined ");
    }
    return 0;
}/*Write a program that takes two integers and a character (+, -, *, /, %) as input. Based on the character, perform the corresponding arithmetic operation between the two numbers and print the result. If the input operator is invalid, print an error message.
												      Input: 5 3 +
Output: 8
*/