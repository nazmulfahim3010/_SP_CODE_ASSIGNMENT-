/*Write a C program to check whether a number is prime or not.*/
#include<bits/stdc++.h>
using namespace std;
int rec(int x,int term){
    ++term;
    if(term==x-1){
        cout<<"prime";
        return 0;
    }
    if(x%term==0){
        cout<<"not prime";
        return 0;
    }
    rec(x,term);

}
int main(){
    int x;
    cin>>x;
    rec(x,2);

}
