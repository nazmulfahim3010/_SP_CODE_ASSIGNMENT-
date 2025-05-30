/*Write a program in C to separate odd and even integers into separate arrays. */
#include<stdio.h>
int main (){
    int n;
    printf("enter array size->");
    scanf("%d",&n);
    int count_ev=0,count_od=0;
    int a[n];
    int even[n];
    int odd[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            count_ev++;
        }
        else {
            count_od++;
        }
    }
    int c=0,d=0;
   for(int i=0;i<n;i++){
    if(a[i]%2==0){
        even[c++]=a[i];
    }
   }

    for(int i=0;i<n;i++){
    if(a[i]%2!=0){
        odd[d++]=a[i];
    }
     
   }
   printf("even->");
   for(int i=0;i<count_ev;i++){
    printf("%d ",even[i]);
   }
   
printf("\nodd->");
for(int i=0;i<count_od;i++){
    printf("%d ",odd[i]);
   }
}