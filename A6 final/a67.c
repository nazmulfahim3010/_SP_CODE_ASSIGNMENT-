/*Write a C program to store n number of elements in an
 array and print the number of odd and the number of even numbers. 
*/
#include<stdio.h>
int main (){
    int n,count;printf("array size->");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }
    printf("even->");
    for(int i=0;i<=n-1;i++){
        if(a[i]%2==0){
            
            printf("%d ",a[i]);
    }
    }
           printf("\nodd->");
     for(int i=0;i<=n-1;i++){
        if(a[i]%2!=0){
     
            printf("%d ",a[i]);
    }
    }


    return 0;
}