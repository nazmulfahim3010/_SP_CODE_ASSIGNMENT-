/*Define a structure Date with members day, month, year. Store the birthdays of two people and output 
which one is older. */
#include<iostream>
using namespace std;
int main(){
    struct h_bd {
        int date;
        int month;
        int year;
    
    };
    struct h_bd person1,person2;
    cin>>person1.date>>person1.month>>person1.year;
    cin>>person2.date>>person2.month>>person2.year;
    if (person1.date>32 || person2.date>32){
        cout<<"invalid date";
    }
    if (person1.month>13 || person2.month>13){
        cout<<"invalid month";
    }
    

    if (person1.year<person2.year){
        cout<<"person 1 is older";
    }
    else if(person1.year==person2.year){
        if (person1.month<person2.month){
            cout<<"person 1 is older";
        }
        else if (person1.date<person2.date){
            cout<<"person 1 is older";
        }
        else{cout<<"person 2 is older";}

    }
    else{cout<<"person 2 is older";}
}