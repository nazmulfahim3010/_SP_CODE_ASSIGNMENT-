/*write a C program to insert an element at a specific index in an array.
*/
#include<stdio.h>
int main (){
    int a[100];
    int n,num;
    printf("declear array size->");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k;
    printf("index->");
    scanf("%d",&k);
    printf("number->");
    scanf("%d",&num);
    for(int i=n;i>=k+1;i--){
        a[i]=a[i-1];
    }
    a[k]=num;
    for(int i=0;i<=n;i++){
        printf("%d ",a[i]);
    }
}