/*Write a program in C to input a 2D array and print it.*/
#include<stdio.h>
int main (){
    int a[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
}
}