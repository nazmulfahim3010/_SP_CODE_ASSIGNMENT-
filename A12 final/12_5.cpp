/*Define a structure Point with x and y. Check if two 
Point structures are equal by comparing their members. 
Implement a function isEqual() to solve the problem.*/
#include<iostream>
using namespace std;
struct point{
        int x;
        int y;
    };
void isEqual(point num1,point num2){
    if (num1.x==num2.x && num2.y==num2.y){
        cout<<"num1 and num2 are equal";
    }
    else{
        cout<<"both are not equal";
    }

}
int main(){
    
    struct point num1,num2;
    cin>>num1.x>>num1.y;
    cin>>num2.x>>num2.y;
    
    isEqual(num1,num2);
    
}