/*Write a C/C++ program to Print 100 to 1.*/
#include<bits/stdc++.h>
using namespace std;
int rec(int x){
    cout<<x<<endl;
    x--;
    if(x<1){
        return 0;
    }
    rec(x);


}
int main(){

    rec(100);
}