/*Write a C program to  check if a given string is a palindrome.*/
#include<iostream>
using namespace std;
int rec(int num,int term,int stonum,int neww){
    if(num==0){
        if(neww==stonum){
            cout<<"palindrome";
            return 0;
        }
        else if(neww!=stonum){
            cout<<"not palindrome";
            return 0;
        }
    }
    int digit=num%10;
    neww=(neww*10)+digit;
    num/=10;
    rec(num,term,stonum,neww);



}
int main(){
    int num;
    cin>>num;
    rec(num,0,num,0);
}