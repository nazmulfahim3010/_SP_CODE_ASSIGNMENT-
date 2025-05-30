/*Write a C program to check whether a number is prime or not.*/
#include<stdio.h>
int main ()
{
    int num ,i;
    scanf("%d",&num);
    int is_prime = 1;
    for(i=2;i<num;i++){
        
        if(num%i==0){
            is_prime=0;
            break;
        }
    }
    if(is_prime==1){
        printf("%d is a prime number",num);
    }
    else if(is_prime==0){
        printf("%d is not a prime number",num);
    }
}