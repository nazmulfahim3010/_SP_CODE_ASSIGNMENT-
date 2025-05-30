/*Define a structure Point with members x and y. Initialize a Point structure directly and display 
which quadrant it falls into.*/
#include<iostream>
using namespace std;
int main(){
    struct quad{
        int x;
        int y;
    };
    struct quad a;
    cin>>a.x>>a.y;
    if (a.x==0 && a.y==0){
        cout<<"origin";
    }
    else if(a.x==0){
        cout<<"y axies";
    }
    else if(a.y==0){
        cout<<"x axies";
    }
    else if(a.x>0 && a.y>0){
        cout<<"1st quadrant";

    }
    else if (a.x>0 && a.y<0){
        cout<<"4th quadrant";
    }
    else if(a.x<0 && a.y>0){
        cout<<"2nd quadrant";
    }
    else if(a.x<0 && a.y<0){
        cout<<"3rd quadrant";
    }
}