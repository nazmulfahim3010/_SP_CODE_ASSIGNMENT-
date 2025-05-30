/*Solve the previous problem using a function named 
swapPerson() that accepts the addresses of two Person 
variables.*/
#include<bits/stdc++.h>
using namespace std;
struct person{
    char name[10];
    int age;
};
void swapPerson(person *p,person *q){
    
    cin>>p->name>>p->age;
    cin>>q->name>>q->age;

    person tem;
    tem=*p;
    *p=*q;
    *q=tem;

    cout<<p->name<<"\n"<<p->age<<endl;;
    cout<<q->name<<"\n"<<q->age;

}
int main(){
    person x,y;
    swapPerson(&x,&y);
    
}