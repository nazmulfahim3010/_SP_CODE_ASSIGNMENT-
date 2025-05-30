#include<stdio.h>
int main (){
    int n;
    printf("array size->");
    scanf("%d",&n);
    int a[n],count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int j=1;j<n;j++){
        if(a[j]<0){
            count++;
        }
    }
    printf("total negative element-> %d",count);


}/*Write a C program to count the total number
 of negative
 elements in an array.*/