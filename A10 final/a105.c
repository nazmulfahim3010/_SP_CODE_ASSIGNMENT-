/*Write a C program to convert a string to uppercase.*/
#include<stdio.h>
int main (){
    char a[100];
    gets(a);
    for(int i=0;a[i]!=0;i++){
       if(a[i]>='a'&&a[i]<='z'){
        a[i]=a[i]-32;
        printf("%c",a[i]);
       } 
    else{
        printf("%c",a[i]);
    }
    }
}