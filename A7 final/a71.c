#include<stdio.h>
int main (){
    int n,m;
    scanf("%d%d",&n,&m);
    int to=m+n;
    int c[to];
    int a[n];
    int b[m];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n;i++){
        c[i]=a[i];
    }
    for(int i=n,j=0;i<to,j<m;i++,j++){
        c[i]=b[j];
    }
   
    for(int i=0;i<to;i++){
        printf("%d ",c[i]);
    }

}