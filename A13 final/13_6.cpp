/*Write a C/C++ program to Print the sum of 1 to 10.*/
#include<bits/stdc++.h>
using namespace std;
int rec(int x,int sum){
    
    sum=sum+x;
    
    x++;
    
    if(x==11){
        cout<<sum;
        return 0;

    }
    
    rec(x,sum);

}
int main(){
    rec(1,0);
}