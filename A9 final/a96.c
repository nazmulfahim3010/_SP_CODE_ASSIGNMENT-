/*Write a program in C to find the sum of the left diagonals of a matrix.*/
#include<stdio.h>
int main (){
    int n,sum=0;
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
            if(i==j){
                sum=sum+a[i][j];
                printf("%d\t",a[i][j]);
            }
            else {
                printf("\t");
            }
        }
        printf("\n");
}
printf("sum of main daigonal->%d",sum);
}