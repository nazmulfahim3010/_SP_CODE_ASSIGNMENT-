#include<stdio.h>
int main (){
    int i,j,n,x=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",x);
            x++;
        }
        printf("\n");
    }


    return 0;
}