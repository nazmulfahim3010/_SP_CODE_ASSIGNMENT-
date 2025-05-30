/*Create a function for converting a celsius temperature to fahrenheit. The function
 should return the value in fahrenheit*/
 #include<iostream>
 using namespace std;
 double change (double x){
    double f = (x*(9/5))+32;
    return f;
 }
 int main (){
    double x;
    cin>>x;
    cout<<change(x);
 }
