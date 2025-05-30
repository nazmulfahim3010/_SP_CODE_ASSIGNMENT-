/*Write a C/C++ program to Print 1 to 10.*/
#include<bits/stdc++.h>
using namespace std;
int rec(int x){
    x++;
    cout<<x<<"\n";
    if (x>=10){
        return 0;
    }
    rec(x);
}
int main(){
    int i=0;
    rec(i);
}