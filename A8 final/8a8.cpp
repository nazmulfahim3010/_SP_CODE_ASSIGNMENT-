/*Create a function to check whether a 
triangle is valid from the lengths of its
 sides. The function should return a 
 boolean value (true/false). (sum of 
every two sides is greater than the third) */
#include<iostream>
using namespace std;
bool tri(int x,int y,int z){
    bool sep=true;
    if(x<y+z&&y<x+z&&z<x+y){
        return false;
    }
    return sep;
}
int main (){
    int a,b,c;
    cin>>a>>b>>c;
    if(tri(a,b,c)==1){
        cout<<"true";
    }
    else if(tri(a,b,c)==0){
        cout<<"false";
    }

}