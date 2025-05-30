/*Write a C program to find the first occurrence of a character in a given string.*/
#include<stdio.h>
int main (){
    char a[100];
    gets(a);
    char ch;
    scanf("%c",&ch);
    for(int i=0;a[i]!='\0';i++){
        if(a[i]==ch){
            printf("%d",i);
            break;
        }
    }
}