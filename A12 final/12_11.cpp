/*Define two structures named Triangle with members a, b, and c, 
signifying the three sides of the triangle. Define another 
structure named Measurements with members area and circumference. 
Assign values to a variable of Triangle type, calculate the area 
and circumference, and assign those measurements to a variable 
of Measurements type.*/
#include<bits/stdc++.h>
using namespace std;
struct triangle{
    int a,b,c;
};
struct measurments{
    double x;
    int y;
};
int main(){
    triangle a;
    cin>>a.a>>a.b>>a.c;
    int cir=a.a+a.b+a.c;
    double s=(cir/2.0);
    double area=sqrt(s*(s-a.a)*(s-a.b)*(s-a.c)) ;

    struct measurments x;
    x.x=area;
    x.y=2*s;

    cout<<x.x<<"\n"<<x.y;
}