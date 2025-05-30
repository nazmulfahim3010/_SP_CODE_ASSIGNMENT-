/*Write a C program to count the sum of digits in a number.*/
#include<iostream>
using namespace std;
int rec(int num,int term,int sum){
    if(term==num){
        cout<<sum;
        return 0;
    }
    int digit=num%10;
    sum=sum+digit;
    num/=10;
    rec(num,term,sum);
}
int main(){
    int num;
    cin>>num;
    rec(num,0,0);
}