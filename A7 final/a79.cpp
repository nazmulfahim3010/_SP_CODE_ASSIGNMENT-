#include<stdio.h>
int main (){
    int n;
    printf("->>array size:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int extra=a[0];
    
   
    for(int i=0,j=1;i<n-1,j<n;i++,j++){
        a[i]=a[j];
    }
    a[n-1]=extra;
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}/*Write a C program to left-rotate an array by one position.
*/