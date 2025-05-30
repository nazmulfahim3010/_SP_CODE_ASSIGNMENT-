#include<stdio.h>
int main(){
    int n;
    printf("array size->");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]<0){
            printf("%d is negative\n",a[i]);
        }
    }

    return 0;
}/*Write a C program to print all negative elements in an array.
*/