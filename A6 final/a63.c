#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int x=0,y=n-1;
    int tem = a[x];
     a[x]=a[y];
     a[y]=tem;
     

    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}/*Write a program in C to store elements in an array,
 swap between the first element and the last, and print the array.
*/