/*Write a C program to copy a string in reverse to another array.*/
#include<iostream>
#include<cstring>
using namespace std;
int main (){
   
    char a[100];
    char b [100];
    gets(a);
    int index;
    for(index=0;a[index]!='\0';index++);
    
    for(int i=0,j=index-1;i<=index,j>=0;i++,j--){
        b[i]=a[j];
        
    }
    b[index]='\0';
    
    cout<<b;

    

}