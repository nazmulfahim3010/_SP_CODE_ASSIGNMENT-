#include<stdio.h>
int main (){
int a,b,extra=0;
printf("enter a -> ");
scanf ("%d",&a);
printf("enter b ->");
scanf ("%d",&b);
extra = a;
a=b;
b=extra;
printf("after swap a->%d and b-> %d",a,b);

    return 0;
}