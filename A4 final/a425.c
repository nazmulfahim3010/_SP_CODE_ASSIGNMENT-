#include<stdio.h>
int main (){
int num,pro=1,sum=0,sto,cube=1;
scanf("%d",&num);
sto=num;
while(num!=0){
    int digit = num%10;
    cube=1;
    for(int i=1;i<=3;i++){
         cube=cube*digit;
    }
    num/=10;
    sum=sum+cube;
    
}
if(sto==sum){
    printf("%d is armstrong number ",sto);
}
else {
    printf("%d is not a armstrong number",sto);
}

    return 0;
}/*Write a C program to check whether a number is an Armstrong number or not. 
An Armstrong number is a number such that the sum of its digits raised
 to the third power is equal to the number itself.
   For example, 371 is an Armstrong number, since  33+73+13=371.
*/