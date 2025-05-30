/*Create a structure named "Employee" to store employee details such as employee ID, name, 
and salary. Write a program to input data for three employees, find the highest salary 
employee, and display their information.*/
#include<iostream>
using namespace std;
int main(){
    struct employee{
        char id[9];
        char name[10];
        int salary;
    };

    struct employee a[3];
    for (int i=0;i<3;i++){
        cin>>a[i].id>>a[i].name>>a[i].salary;
    }
    int max=a[0].salary;
    int index;

    for(int i=0;i<3;i++){
        if(max<a[i].salary){
            max=a[i].salary;
            index=i;
        }
    }

    cout<<a[index].id<<"\n"<<a[index].name<<"\n"<<a[index].salary;

}