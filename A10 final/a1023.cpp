/*Take two strings as inputs and concatenate the two strings. 
Sample Input: hello world
Expected Output: helloworld*/
#include<iostream>
using namespace std;
int main (){
    char a[100];
    gets(a);
    for(int i=0;a[i]!='\0';i++){
        if(a[i]==' '){
           continue;
        }
        cout<<a[i];
    }
}