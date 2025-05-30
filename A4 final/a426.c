/*Write a C program to find Armstrong Numbers from 0 to 1000.*/
#include <stdio.h>
int main (){
    int sto,sum=0,pro=1,count=0;
    for(int i =0;i<=1000;i++){
        sto=i;
        sum=0;
        while(sto!=0){
            int digit = sto%10;
            pro=1;
            for(int j=1;j<=3;j++){
                pro=pro*digit;
            }
            sto/=10;
            sum=sum+pro;
        }
    
        if(sum==i){
            count++;
            printf(" %d is arm strong number\n ",sum);

    }
    }
    printf("->%d",count);
    
    

    return 0;
}
