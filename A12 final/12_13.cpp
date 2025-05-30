/*Define a structure named Person with members name and age. 
Input the values using pointers, and print them.*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    struct person{
        char name[10];
        int age;
    };
    struct person x;
    person *p=&x;
    cin>>p->name;
    cin>>p->age;

    cout<<p->name<<"\n"<<p->age;

}