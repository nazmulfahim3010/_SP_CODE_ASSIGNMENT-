#include<iostream>
using namespace std;
int sum(int a,int b,int c){
    int sum =a+b+c;
    return sum;
}
int main (){
    int a,b,c;
    cin>>a>>b>>c;
    int s = sum(a,b,c);
    cout<<s;
    

}/*Create a function to find the sum of three integers and return the sum.*/