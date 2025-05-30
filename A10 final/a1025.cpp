/*Take input a binary number as a string and convert it to an integer, store it to an 
integer variable, and print it.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100];
    gets(a);
    int len =strlen(a);
    int b[len];
    for(int i=0,j=len-1;i<len,j>=0;i++,j--){
        b[i]=pow(2,j);

    }
    int sum=0;
    for(int i=0;a[i]!='\0';i++){
        if(a[i]=='1'){
            sum=sum+b[i];
        }
        
    }
    cout<<sum<<" ";

    
}


