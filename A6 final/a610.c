/*Write a C program to store n floating-point numbers 
in an array and print their average.*/
#include<stdio.h>
int main (){
    int n;
    printf("array size->");
    scanf("%d",&n);
    double a[n],sum=0,avg=0;
    for(int i=0;i<n;i++){
        scanf("%lf",&a[i]);
    }
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    double sum1=sum;
        avg = sum1/n;
    printf("%lf",avg);      
    return 0;
}
