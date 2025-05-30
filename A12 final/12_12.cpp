/*Solve the previous problem using a function named 
storeMeasurements().*/

#include<bits/stdc++.h>
using namespace std;
struct triangle{
    int a,b,c;
};
struct measurments{
    double x;
    double y;
};
void storeMeasurements(measurments xx,double s,double area,int cir){
    xx.x=area;
    xx.y=cir;

    cout<<xx.x<<"\n"<<xx.y;


}
int main(){
    triangle a;
    cin>>a.a>>a.b>>a.c;
    int cir=a.a+a.b+a.c;
    double s=(cir/2.0);
    double s_S=s*(s-a.a)*(s-a.b)*(s-a.c);
    double area=sqrt(s_S);

    struct measurments xx;
    storeMeasurements(xx,s,area,cir);
    
}