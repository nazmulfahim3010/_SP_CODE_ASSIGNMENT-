/*Write a C/C++ program to Calculate the sum of the following 
series: 12+22+32+42+52*/
#include<bits/stdc++.h>
using namespace std;
int rec(int x,int sum){
    ++x;
    if(x==6){
        cout<<sum;
        return 0;
    }
    int pro=1;
    for(int i=0;i<2;i++){
        pro=pro*x;
    }
    sum=sum+pro;
    
    rec(x,sum);
    
}
int main(){
    rec(0,0);
}