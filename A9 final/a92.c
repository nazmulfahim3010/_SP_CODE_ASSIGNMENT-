/*Write a program in C for adding two matrices of the same size.*/
/*Write a program in C to input a 2D array and print it.*/
#include<stdio.h>
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
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
}
}