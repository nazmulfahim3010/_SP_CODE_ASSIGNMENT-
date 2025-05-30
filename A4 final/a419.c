/*Write a C program to input an integer and reverse it.*/
#include<stdio.h>
int main (){
    int i,num,sto=0;
scanf("%d",&num);
while(num!=0){
    int digit = num%10;
    sto=sto*10+digit;
    num = num/10;
    }
    printf("%d",sto);

    return 0;
}