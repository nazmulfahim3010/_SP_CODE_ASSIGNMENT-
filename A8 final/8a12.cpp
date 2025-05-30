/*Create a function that returns the cube of an integer.*/
#include<iostream>
using namespace std;
int cube(int x){
    int cube =x*x*x;
    return cube;
}
int main (){
    int x;
    cin>>x;
    cout<<cube(x);
}