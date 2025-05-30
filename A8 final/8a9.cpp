/*Create a function to check whether a 
triangle is valid or not from the lengths 
of its angles. The function should return 
a boolean value (true/false). (sum of
 all three angles should be 180 degrees)*/
 #include<iostream>
 using namespace std;
 void tri(double a,double b,double c){
    double sum=a+b+c;
    if(sum==180){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
   
 }
 int main (){
    double a,b,c;
    cin>>a>>b>>c;
    tri(a,b,c);

 }