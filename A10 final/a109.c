/*Write a C program to find the first occurrence of a character in a given string.*/
#include<stdio.h>
int main (){
    char a[100];
    gets(a);
    char ch;
    scanf("%c",&ch);
    int i;
    for(i=0;a[i]!='\0';i++){
    }
    for(int j=i-1;j>=0;j--){
        if(a[j]==ch){
            printf("%d",j);
            break;
        }
    }
     
}