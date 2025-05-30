/*Write a C program to calculate the GCD/HCF of two numbers.*/
#include<bits/stdc++.h>
using namespace std;
int rec(int mx,int mn,int term,int gcd){
    term++;
    
    if(mx<term){
        cout<<gcd<<endl;
        return 0;
        }

    if ((mx%term==0) && (mn%term==0)){
        gcd=term;
    }   
    rec(mx,mn,term,gcd); 

}
int main(){
    int x,y;
    cin>>x>>y;
    int maxx=max(x,y);
    int minn=min(x,y);

    rec(maxx,minn,1,1);

}