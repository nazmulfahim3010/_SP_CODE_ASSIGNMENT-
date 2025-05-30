/*Write a C program to find Prime Numbers from 0 to 1000.*/
#include<stdio.h>
int main (){
    int num,i,j,count=0,sto=0;
    for(i=1;i<=1000;i++){
        int is_prime =1;
        for(j=2;j<i;j++){
            if(i%j==0){
                is_prime=0;
                break;
            }
        }
        if(is_prime==1){
            count++;
        }

    }
    printf("%d",count);

    return 0;
}