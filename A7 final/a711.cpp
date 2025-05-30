/*Write a C program to left-rotate an array by k positions.*/
#include<stdio.h>
int main (){
    int n;
    printf("enter array size->");
    scanf("%d",&n);
    int a[n];
    int k;
    int b[100];
    printf("enter the k:");
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]); 
    }
    for(int i=0;i<=k;i++){
        b[i]=a[i];
    }
    int extra=a[0];
    for(int i=0;i<n-k;i++){
        a[i]=a[i+k]; 
    }
    for(int i=0,j=k;i<=k,j>=1;i++,j--){
        a[n-j]=b[i];
    }
    
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }


}