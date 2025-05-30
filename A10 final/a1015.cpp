/*Write a C program to input a string and copy its vowels and consonants in separate strings.
Sample Input: tanvirmahtab
Expected Output: aiaa tnvrmhtb
*/
#include<iostream>
#include<cstring>
using namespace std;
int main (){
    char a[100];
    char b[100];
    gets(a);
    int len=strlen(a);
    int n=0;
    for(int i=0;i<=len;i++){
        if(a[i]=='a'||a[i]=='\0'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]==' '){
           b[n++]=a[i]; 
        }

    }
    cout<<b;

}