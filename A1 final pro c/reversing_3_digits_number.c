//Take a three digit integer as input and output the reverse number.
#include <stdio.h>
int main(){
    int a,n1,n2,ne,new,n3 ;
    printf("enter 3 digit number -> ");
    scanf("%d",&a);
    n3 = a %10;
    n1 = a / 100;
    ne = a /10;
    n2 = ne % 10;
    new = (n1*1)+(n2*10 )+(n3*100);
    printf("the reverse number is %d",new);


    return 0;
}//Take a three digit integer as input and output the reverse number.