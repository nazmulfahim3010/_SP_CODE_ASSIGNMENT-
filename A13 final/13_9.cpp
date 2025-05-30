/*Write a C/C++ program to Take input two integers x and y and calculate xy.*/
#include<bits/stdc++.h>
using namespace std;
int rec(int x,int y,int term,int pro){
    term++;
    if(term==y){
        cout<<pro;
        return 0;
    }
    pro=pro*x;
    rec(x,y,term,pro);
}
int main(){
    int x,y;
    cin>>x>>y;
    rec(x,y,1,1);
}