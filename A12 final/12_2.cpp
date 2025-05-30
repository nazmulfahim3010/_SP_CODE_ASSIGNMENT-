/*Define a structure named Person with members name and age. Swap the values of two 
variables of Person type.*/
#include<iostream>
using namespace std;
int main(){
    struct person{
        char name[20];
        int age;
    };
    struct person human1,human2,tem;
    cin>>human1.name;
    cin>>human1.age;
    cin>>human2.name;
    cin>>human2.age;
    tem=human1;
    human1=human2;
    human2=tem;
    cout<<human1.name;
    cout<<human1.age<<endl;
    cout<<human2.name;
    cout<<human2.age;
}