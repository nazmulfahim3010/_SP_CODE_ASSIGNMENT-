/*Write a C program to insert a range of elements in an array.*/
#include<stdio.h>
int main (){
    int n;
    printf("declear array size->>");
    scanf("%d",&n);
      int  a[100];
      int ind;
      printf("inster index->");
      scanf("%d",&ind);
      int k;
      printf("the number of element want to insert->>");
      scanf("%d",&k);
      for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
      }
      for(int i=ind;i<=ind+(k-1);i++){
        a[i+k]=a[i];
      }
      printf("added element->\n");
      for(int i=ind;i<=ind+(k-1);i++){
        scanf("%d",&a[i]);
      }
      for(int i=0;i<=n+k-1;i++){
        printf("%d ",a[i]);
      }
}