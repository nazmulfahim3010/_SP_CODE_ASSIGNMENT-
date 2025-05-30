/*Write a C program to print all the divisors/factors of a 
number.*/
#include<bits/stdc++.h>
using namespace std;
int rec(int x,int y){
    ++y;
    if(y==x){
        return 0;
    }
    if(x%y==0){
        cout<<y<<endl;
    }
    rec(x,y);



}
int main(){
    int x;
    cin>>x;
    rec(x,0);
}