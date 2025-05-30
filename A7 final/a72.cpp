/*Write a C program to check whether an array is a Palindrome array.
Example of a palindrome array: 
*/
#include<stdio.h>
#include<stdbool.h>
int main (){
    int n;
    printf("array size:");
    scanf("%d",&n); 
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);  
    }
    bool pal=true;
    for(int i=0,j=n-1;i<j||i==j;i++,j--){
        if(a[i]!=a[j]){
            pal=false;
            break;
        }
    }
    if(pal==false){
        printf("not Palindrome");
    }
    else {
        printf("Palindrome");
    }
}

