#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"array size-->> ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int extra=a[n-1];

    for(int i=n-2,j=n-1;i>0,j>=1;i--,j--){
       a[j]=a[i];
    }
    a[0]=extra;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}/*
Write a C program to right-rotate an array by one position.
*/