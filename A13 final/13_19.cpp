/*Write a recursive function to find the sum of elements in an array.*/
#include<iostream>
using namespace std;
int rec(int a[],int term, int sum,int n){
    term++;
    if(term==n){
        cout<<sum;
        return 0;
    }
    sum=sum+a[term];
    rec(a,term,sum,n);

}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    rec(a,-1,0,n);
}