/*Write a C program to find the length of a C string (character array).*/
#include<iostream>
using namespace std;
int rec(char a[100],int len,int term){

    term++;
    if(a[term]=='\0'){
        cout<<len;
        return 0;
    }
    len++;
    rec(a,len,term);  


}
int main(){
    char a[100];
    fgets(a,100,stdin);
    rec(a,0,0);
}