/*Write a C program to check whether a number is a strong number or not. 
A strong number is a special number whose sum of the factorial of digits is equal to the original
 number. For Example: 145 is a strong number since  1!+4!+5!=145 .*/
 #include<stdio.h>
 int main(){
    int num,digit,pro=1,sum=0;
    scanf("%d",&num);
    int sto =num;
    while(num!=0){
      digit=num%10;
      pro=1;
      for(int j=1;j<=digit;j++){
         pro=pro*j; 
      }
      sum=sum+pro;
      num/=10;
    }
   if(sto==sum){
      printf("%d is a strong number ",sto);
   }
   else{
      printf("%d is a not a strong number",sto);
   }
    return 0;
 }