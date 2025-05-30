/*Write a C/C++ program to Write a program to print the 
factorial of a number.*/
#include<bits/stdc++.h>
using namespace std;
int rec(int x,int p,int pro){
    ++x;
    if (x>p){
    cout<<pro;
        return 0;
    }
    pro=pro*x; 
    rec(x,p,pro)   ;

}
int main(){
    int x;
    cin>>x;
    rec(0,x,1);
}