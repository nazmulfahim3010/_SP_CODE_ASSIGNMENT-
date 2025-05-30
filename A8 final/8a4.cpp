/*Create a function that takes three integers as arguments and returns the average of them.*/
#include<iostream>
using namespace std;
double avg(int x,int y,int z ){
    int sum=x+y+z;
    double avg=sum/3.0;
    return avg;
}
int main (){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    double avgr =avg(a,b,c);
   cout<<avgr;
    }
