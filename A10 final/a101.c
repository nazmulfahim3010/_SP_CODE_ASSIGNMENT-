/*Write a C program to input a word and print each of the characters separated by a space.*/
#include<stdio.h>
int main (){
 char a[100];
 gets(a);
 for(int i=0;a[i]!='\0';i++){
    printf("%c ",a[i]);
 }
}
