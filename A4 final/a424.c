/*Write a C program to find Strong Numbers from 0 to 1000.
*/
#include<stdio.h>
int main(){
   int pro=1,sto,sum=0,count=0,sto2;
    for(int i=0;i<=1000;i++){
      sto=i;
      sum=0;//i am taking sum for 1000 number and it is indivitual
     
    while(sto!=0){
      pro=1;
      int digit =sto%10;

      for(int j=1;j<=digit;j++){
         pro=pro*j;
      }
      sto=sto/10;
      sum=sum+pro;
      
    }
      if(sum==i){
         count++;
         printf("%d ",i);
      }
    }
    printf("\n%d",count);
   

    return 0;
}