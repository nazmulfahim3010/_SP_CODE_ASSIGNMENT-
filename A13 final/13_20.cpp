/*Write a recursive function to print the max-element of an array.*/
#include<iostream>
using namespace std;
int rec(int a[],int term,int maxx,int n){
    term++;
    if(term==n){
        cout<<"max:"<<maxx;
        return 0;
    }
    if(term==0){
        maxx=a[0];
    }
    
    if(a[term]>maxx){
        maxx=a[term];
    }
    rec(a,term,maxx,n);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    rec(a,-1,0,n);
}