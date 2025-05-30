/*Write a C program to count the number of digits in an integer.*/
#  include<stdio.h>
int main(){
    int i,num,sto,count=0;
scanf("%d",&num);
while(num!=0){
    int digit = num%10;
   count ++;
    num = num/10;

    }
    printf("%d",count);
    return 0;
}
