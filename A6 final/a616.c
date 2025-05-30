/*Write a C program to store n number of elements
 in an array and store their cumulative sum into 
 another array.
*/
#include<stdio.h>
int main (){
    int n,sum=0;
    printf("array size->");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    printf("cumulative sum %d",sum);


}