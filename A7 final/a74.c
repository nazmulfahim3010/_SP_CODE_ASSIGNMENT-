/*Write a C program to delete an element from a specific index in an array. 
Input array:
*/
#include<stdio.h>
int main (){
    int a[100];
    int n;
    printf("declear array size->");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k,num;
    printf("index you want to delete->");
    scanf("%d",&k);
    for(int i=k,j=k+1;i<=n-k,j<=n-1;i++,j++){
        a[i]=a[j];
    }
    for(int i=0;i<n-1;i++){
        printf("%d ",a[i]);
    }

}