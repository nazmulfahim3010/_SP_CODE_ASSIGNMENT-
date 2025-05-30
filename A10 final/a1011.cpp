/*Write a C program and count the frequency of each letter. 
Sample input: nayeem
Sample output: 
a : 1
e : 2
m : 1
n : 1
y : 1
*/
#include<iostream>
#include<cstring>
using namespace std;

int main (){
    char a[100];
    gets(a);
    int b[27];
    int len =strlen(a);
    for(int i=0;i<26;i++){
        b[i]=0;
    }
    for(int i=0;i<len;i++){
        int n=a[i]-'a';
        b[n]++;
    }
    for(int i=0;i<26;i++){
        if(b[i]>0){
            char c=i+'a';
            cout<<c<<" : "<<b[i]<<endl;
        }
        
    }
    
}