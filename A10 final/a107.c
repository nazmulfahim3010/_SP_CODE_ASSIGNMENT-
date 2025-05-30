/*Write a C program to toggle the case of each character of a string. That is, if a character is lowercase, convert it to uppercase, and vice-versa.*/
#include<stdio.h>
int main (){
    char a[100];
    gets(a);
    for(int i=0;a[i]!='\0';i++){
         if(a[i]>='A'&&a[i]<='Z'){
            a[i]=a[i]+32;
            printf("%c",a[i]);
        }
        else if(a[i]>='a'&&a[i]<='z'){
        a[i]=a[i]-32;
        printf("%c",a[i]);
       } 
    }
}