/*Define a structure named Person with members name and age. 
Swap the values of two variables of Person type using pointers.*/
#include<bits/stdc++.h>
using namespace std;
struct person{
    char name[10];
    int age;
};
int main(){
    person x,y;
    person *p=&x,*q=&y;
    cin>>p->name>>p->age;
    cin>>q->name>>q->age;

    person tem;
    tem=*p;
    *p=*q;
    *q=tem;

    cout<<p->name<<"\n"<<p->age<<endl;;
    cout<<q->name<<"\n"<<q->age;

}