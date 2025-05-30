/*Write a C program to search an element in an array
. If the element is present in the 
array, print its index, else print -1.*/
#include<stdio.h>
int main(){
    int n;
    printf("array size->");
    scanf("%d",&n);
    int a[n];
    int x,index,ispre=0;
    printf("enter the element->");
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(x==a[i]){
            ispre=1;
            index=i;
            break;
        }
    }
    if(ispre==1){
        printf("index number ->%d",index);
    }
    else if(ispre==0){
        printf("-1");
    }
    

    return 0;
}