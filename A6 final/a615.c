/*Write a C program to reverse an array. You cannot use another array.
*/
#include<stdio.h>
int main(){
    int n,x=0,tem;
    scanf("%d",&n);
    int a[n];
    int y=n-1;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0,j=n-1;i<j;i++,j--){
        tem =a[i];
        a[i]=a[j];
        a[j]=tem;
        
        
    }
    for(int k=0;k<n;k++){
        printf("%d ",a[k]);
    }
}