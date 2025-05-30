/*Create a structure called "Student" with members name, age, and total marks. Write a C 
program to input data for 45 students, display their information, and find the average of 
total marks.*/
#include<iostream>
using namespace std;
int main(){
    struct student{
        char name[10];
        int age;
        int total_marks;
    };

    struct student a[45];
    for(int i=0;i<45;i++){
        cin>>a[i].name>>a[i].age>>a[i].total_marks;
    }

    for(int i=0;i<45;i++){
        cout<<a[i].name<<"\n"<<a[i].age<<"\n"<<a[i].total_marks;
    }
}