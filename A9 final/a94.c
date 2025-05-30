/*Write a program in C to accept two matrices of the same
 size and check whether they are equal.*/

#include<stdio.h>
#include<stdbool.h>
int main (){
    int n;
    printf("enter array size->");
    scanf("%d",&n);
    
    int a[n][n];
    int b[n][n],c[n][n];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }///input done
    bool is_array=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           if(a[i][j]!=b[i][j]){
            is_array=false;
            break;
           }
        }
    }
    if(is_array==true){
        printf("the array is equal!!");
    }
    else{
        printf("Is not equal");
    }
}