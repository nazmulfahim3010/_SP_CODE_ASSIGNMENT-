/*Write a C program to delete a range of  elements from an array.
Input array:
*/
#include<stdio.h>
int main (){
    int n;
    printf("declear array size->");
    scanf("%d",&n);
    int a[n];
    int ki,kf;
    printf("enter k(index) initial ->");
    scanf("%d",&ki);
    printf("enter k(index) final->");
    scanf("%d",&kf);
    int diff=(kf-ki)+1;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=ki;i<=kf;i++){
        a[i]=a[i+diff];
    }
    for(int i=0;i<n-diff;i++){
        printf("%d ",a[i]);
    }


}