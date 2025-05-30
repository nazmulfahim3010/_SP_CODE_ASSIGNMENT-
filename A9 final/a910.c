/*Write a C program to find the upper triangular matrix.*/
/*Write a C program to find a lower triangular matrix.*/
#include<stdio.h>
int main (){
    int n;
    printf("enter array size->");
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j){
                printf(" ");
            }
            else{
                printf("%d\t",a[i][j]);
            }
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            
        }
    }


}
