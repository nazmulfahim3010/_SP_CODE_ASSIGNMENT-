/*Write a C program to find the sum of each row and column of a matrix.*/
#include<stdio.h>
int main (){
    int n,sum=0;
    printf("enter array size->");
    scanf("%d",&n);
    int row_sum[n],col_sum[n];
    int a[n][n];
    int b[n][n],c[n][n];
    for(int i=0;i<n;i++){
        row_sum[i]=0;
        col_sum[i]=0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            row_sum[i]+=a[i][j];
            col_sum[j]+=a[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        printf("sum of row %d ->",i+1);
        printf("%d \n",row_sum[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("sum of column %d ->",i+1);
        printf("%d\n",col_sum[i]);
    }
}