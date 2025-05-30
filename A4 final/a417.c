/*Write a C program to count the number of even digits in an integer*/

#include<stdio.h>
int main (){
    int i,num,sto=0;
scanf("%d",&num);
while(num!=0){
    int digit = num%10;
    if(digit%2==0){
        sto++;
    }
    num = num/10;
    }
    printf("%d",sto);
    return 0;
}