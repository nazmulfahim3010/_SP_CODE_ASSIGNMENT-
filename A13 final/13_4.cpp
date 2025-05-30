/*Write a C/C++ program to Print the even numbers between 1 and 
100.*/
#include<bits/stdc++.h>
using namespace std;
int rec(int x){
    if(x%2==0){
        cout<<x<<endl;
    }
    x++;
    if(x>100){
        return 0;
    }
    rec(x);
}
int main(){
    rec(1);
}