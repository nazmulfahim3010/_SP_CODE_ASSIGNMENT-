/*Write a C program to print the digits in an integer in reverse order in separate lines.
*/
#include<stdio.h>
int main ()
{int i,num,sto;
scanf("%d",&num);
while(num!=0){
    int digit = num%10;
    printf("%d\n",digit);
    num = num/10;
    }


    return 0;
}