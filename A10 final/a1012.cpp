/*Write a C program to print the majority character in a given string.
Sample Input:iffat
Expected Output: f
*/
#include<iostream>
#include<cstring>
using namespace std;
int main (){
char a[100];
gets(a);

int b[26];
for(int i=0;i<26;i++){
    b[i]=0;
}//creat b[len==0]

for(int i=0;a[i]!='\0';i++){
    int n=a[i]-'a';
    b[n]++;
}//counting;;

int max=b[0];
int index=0;
//max defining;
for(int i=0;i<26;i++){
    if(b[i]>max){
        index=i;
    }

}
//saving index;
char n=index+'a';
//converting into char;
cout<<n;
}


