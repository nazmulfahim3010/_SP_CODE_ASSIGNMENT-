/*Write a C program to input a string and make a new string by adding an asterisk ‘*’ at 
both ends of the original string.Sample Input: olid
Expected Output: *olid**/
#include<iostream>
#include<cstring>
using namespace std;
int main (){
    char a[100];
    gets(a);
    int len =strlen(a)+3;
    char b[len];
    b[0]='*';
    b[len-1]='\0';
    b[len-2]='*';
    for(int i=1,j=0;i<len-2,j<len-3;i++,j++){
        b[i]=a[j];
    }
    cout<<b;


}

