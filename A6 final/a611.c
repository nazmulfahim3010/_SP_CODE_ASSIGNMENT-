/*Write a program in C to copy the elements of one
 array into another array.
*/
#include<stdio.h>
int main (){
    int n;
    printf("array size->");
    scanf("%d",&n);
    int a[n];
    int c[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int j=0;j<n;j++){
        c[j]=a[j];
    }
    printf("original->>");
     for(int j=0;j<n;j++){
        printf("%d ",a[j]);
    }
    printf("\ncopy->>");
     for(int j=0;j<n;j++){
          printf("%d ",c[j]);
    }
   
    


    return 0;
}