/*Write a program in C to remove characters from a string except alphabets and store it to 
another string.*/
#include<iostream>
#include<cstring>
using namespace std;
int main (){
    char a[100];
    char b[100];
    gets(a);
    int len=strlen(a);
    int n=0;
    for(int i=0;i<=len;i++){
        if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')||a[i]==' '||a[i]=='\0'){
           b[n++]=a[i]; 
        }

    }
    cout<<b;

}