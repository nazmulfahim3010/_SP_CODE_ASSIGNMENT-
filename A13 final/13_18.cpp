/*Write a C program to print the reverse of a given string.*/
#include<iostream>
using namespace std;
int rec1(int len,char a[]){
    len--;
    if(len==-1){
        return 0;
    }
    cout<<a[len];
    rec1(len,a);

}
int rec(char a[],int len,int term){
    term++;
    if(a[term]=='\0'){
        rec1(len,a);
        return 0;
    }
    ++len;
    rec(a,len,term);
}
int main(){
    char a[100];
    fgets(a,100,stdin);
    rec(a,0,0);
}