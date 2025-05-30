/*Create a function to find the level of heat from the temperature. 
(If the temperature is 40 degrees or more, it is “super hot”. If it is 30 degrees or more,
 the temperature is “hot”. Otherwise it’s “cold”.)
*/
#include<iostream>
using namespace std;

    void tempr(double temp){
        if(temp>=40){
            printf("super hot");
        }
        else if(temp<40&&temp>=30)
        cout<<"hot";
        else cout<<"cold";
    }

    
    int main (){
        double t;
        cin>>t;
        tempr(t);
    }


