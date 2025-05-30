/*Solve the previous problem using a function named 
printPerson() that accepts the address of Person type.*/
#include<bits/stdc++.h>
using namespace std;
struct person{
        char name[10];
        int age;
    };
void printPerson(person *p){
    cin>>p->name;
    cin>>p->age;
    

    cout<<p->name<<"\n"<<p->age;

}
int main(){
    
    struct person x;
    printPerson(&x);
    
}