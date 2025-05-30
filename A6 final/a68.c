/*Write a C program to store n number of integers
 in an array and print the maximum value*/
 #include<stdio.h>
 int main (){
    int n,max;
    printf("array size->");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max = a[0];
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i]; 
        }
    }
    printf("maximum value->%d",max);
    return 0;
 }