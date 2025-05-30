/*Write a C program to copy a string to another string.*/
#include<iostream>
#include<cstring>
using namespace std;
int main (){
char a[100];
char b[100];
gets(a);
int len;for(len=0;a[len]!=0;len++);
for(int i=0;i<=len;i++){
    b[i]=a[i];
}
cout<<b;
}
