/*Write a program in C to remove the occurrences of a specific character from a string and 
store it to another string.Sample Input: worldwideweb   w
Expected Output: orldideeb*/
#include<iostream>
#include<cstring>
using namespace std;
int main (){
    char a[100];
    char b;
    gets(a);
    cin>>b;
    for(int i=0;a[i]!='\0';i++){
        if(a[i]==b)
        continue;
        cout<<a[i];
    }

    

}