/*Write a C program to print the sum of digits in an integer.*/
#include<stdio.h>
int main (){
    int i,num,sto=0;
scanf("%d",&num);
while(num!=0){
    int digit = num%10;
    sto= sto +digit;
    num = num/10;
    }
    printf("%d",sto);
    return 0;
}