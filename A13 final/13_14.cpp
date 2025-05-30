/*Write a C program to count the number of digits in a number.*/
#include<iostream>
using namespace std;
int rec(int num,int term,int count){
    if(num==term){
        cout<<count;
        return 0;
    }
    num/=10;
    count++;
    rec(num,term,count);
}
int main(){
    int num;
    cin>>num;
    rec(num,0,0);
}