/*Write a C/C++ program to Input a and b using scanf. Print a 
to b.*/
#include<bits/stdc++.h>
using namespace std;
int rec(int x,int y){
    cout<<x<<endl;
    x++;
    if (x>y){
        return 0;
    }
    rec(x,y);
}
int main(){
    int x,y;
    cin>>x>>y;
    rec(x,y);
}