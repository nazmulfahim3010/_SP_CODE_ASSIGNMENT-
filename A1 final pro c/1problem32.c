#include<stdio.h>
int main (){
int a ;
printf("enter a 3 digit number ->");
scanf("%d",&a);
int b = a % 10;
int c = a/100;
int e =  a/10;
int d = e %10;

int new = b+c+d;
printf("the number is %d ",new);

    return 0;
}//Take a three-digit integer as input and print the sum of the digits.





/*Take a three-digit integer as input and print the sum of the digits.


*/