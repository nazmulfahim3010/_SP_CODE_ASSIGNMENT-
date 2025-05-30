#include<stdio.h>
int main (){
    int n;
    printf("student number->");
    scanf("%d",&n);
    int a[n],count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i =0;i<n;i++){
        if(100>= a[i]&&a[i] >=80){
            count++;
       }
    }
    printf("total %d got A+ out of %d students",count,n);
    
}/*Write a C program to store the marks of n number of students
 in an array and count how many of them obtained A+.
*/