/*Take input an integer as a string, then convert the string to integer, store it to an 
integer variable, and print it*/
#include<iostream>
using namespace std;
int main (){
    char a[100];
    int b[100];
    gets(a);
    int i;
    for( i=0;a[i]!='\0';i++){
        b[i]=a[i];
    }
    for(int j=0;j<i;j++){
        cout<<b[j]<<" ";
    }

   
}