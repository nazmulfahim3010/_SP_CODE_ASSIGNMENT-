/*Write a program in C to print a string in reverse order.*/
#include<stdio.h>
#include<string.h>
int main (){
    char a[100];
    gets(a);
    int len = strlen(a);
    for(int i=len-1;i>=0;i--){
        printf("%c",a[i]);
    }
}
