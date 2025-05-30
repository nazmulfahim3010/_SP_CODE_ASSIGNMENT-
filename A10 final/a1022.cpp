/*Write a C program to check if a string is palindrome or not.*/
#include<iostream>
#include<cstring>
using namespace std;
int main (){
    char a[100],b[100];
    gets(a);
    int len = strlen(a);
    bool is_pal=true;
    for(int i=0,j=len-1;i<len,j>=0;i++,j--){
        if(a[i]!=a[j]){
            is_pal=false;
            break;
        }
    }
    if(is_pal==true){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
}