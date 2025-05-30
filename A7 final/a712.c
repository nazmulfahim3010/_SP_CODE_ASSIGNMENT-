/*Write a C program to right-rotate an array by k positions.*/
#include<stdio.h>
int main (){
    int n;
    printf("declear array size->");
    scanf("%d",&n);
    int a[n];
    int b[100];
    int k;
    printf("enter value of k->");
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }//input..
    for(int i=n-k,j=0;i<=n,j<k;i++,j++){
        b[j]=a[i];
    }//save
    for(int i=n-1;i>=k;i--){
        a[i]=a[i-k];
    }
    for(int i=0;i<k;i++){
        a[i]=b[i];
    }//set..
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
