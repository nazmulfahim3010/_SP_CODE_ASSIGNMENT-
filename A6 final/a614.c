/*Write a program in C to copy the elements of one array 
into another array in reverse order.*/
#include<stdio.h>
int main(){
    int n;
    printf("array size->");
    scanf("%d",&n);
    int a[n];
    int c[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=n-1,j=0;i>=0,j<n;i--,j++){
        c[j]=a[i];
    }  
      for(int i=0;i<n;i++){
        printf("%d ",c[i]);
    }
    
    return 0;
}