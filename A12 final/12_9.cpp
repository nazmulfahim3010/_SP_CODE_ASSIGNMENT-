/*Create a structure named "Employee" to store employee details such as employee ID, name, 
birth date, and salary. The birth date should be of another structure Date with members day, 
month, year. Write a program to input data for five employees. Implement a function 
displayEmployeeDetails() to solve the problem.*/
#include<iostream>
using namespace std;
struct birthday{
        int date;
        int month;
        int year;
    };
    struct employee{
        char id[9];
        char name[20];
        int salary;
        birthday b_day;
    };
void displayEmployeeDetails(employee a[5]){
    for(int i=0;i<5;i++){
        cout<<"ID:"<<a[i].id<<"\n"<<"Name:"<<a[i].name<<"\n";
        cout<<"salary:"<<a[i].salary<<"\n";
        cout<<"DOB:"<<a[i].b_day.date<<"-"<<a[i].b_day.month<<"-"<<a[i].b_day.year;
    }


}
int main(){
    employee a[5];
    for(int i=0;i<5;i++){
    cin>>a[i].id>>a[i].name>>a[i].salary>>a[i].b_day.date>>a[i].b_day.month>>a[i].b_day.year;
    }
    displayEmployeeDetails(a);
}