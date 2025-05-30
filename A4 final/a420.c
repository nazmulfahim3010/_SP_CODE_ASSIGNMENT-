/*Write a C program to input an integer and check if the number is a Palindrome.*/
#include<stdio.h>
int main (){
    int i,num,sto,new,keep=0;
scanf("%d",&num);
sto = num;
while(num!=0){
    int digit = num%10;
    keep = keep*10+digit;
    num = num/10;
    }
    if(keep == sto ){
        printf("the number is a Palindrome");
    }
    else {
        printf("the number is not a Palindrome");
    }
    return 0;
}