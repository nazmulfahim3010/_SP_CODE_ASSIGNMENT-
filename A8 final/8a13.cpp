/*Create a function to calculate the circumference of a circle. (2r)*/
#include<iostream>
using namespace std;
double circum(int x){
    return 2*3.1416*x;

}
int main (){
    double x;
    cin>>x;
    cout<<circum(x);
}