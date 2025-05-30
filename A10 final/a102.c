/*Write a C program to input a sentence and print each of the characters in a new line.*/
#include<stdio.h>
int main (){
 char a[100];
 gets(a);
 for(int i=0;a[i]!='\0';i++){
    printf("%c\n",a[i]);
 }
}
