/*Write a program in C to print the element of the left diagonal of a matrix.*/

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
            if(i==j){
                printf("%d\t",a[i][j]);
            }
            else {
                printf("\t");
            }
        }
        printf("\n");
}
}