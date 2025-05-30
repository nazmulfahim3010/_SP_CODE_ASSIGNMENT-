/*Create a function to find the minimum
 of three integers.
 The function should return the value*/
 #include<iostream>
 using namespace std;
 int mini(int x,int y,int z){
    int min;
    if(x<y && x<z){
        min =x;
    
    }
    else if(y<z){
        min=y;
    }
    else{
        min =z;
    }
    return min;
 }
 int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<mini(a,b,c);

 }