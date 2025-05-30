/*Write a C/C++ program to Print the following pattern*/
#include<bits/stdc++.h>
using namespace std;
int rec2(int y){
    y--;
    if(y==0){
        return 0;
    }
    cout<<y<<endl;
    rec2(y);
    
}
int rec1(int x){
    cout<<x<<endl;///1,2,3,4,5
    x++;
    if(x==6){
    if (rec2(x)==0){
        return 0;

    }
    }
    rec1(x);
    
}
int main(){
    int x=1;
    rec1(x);

}