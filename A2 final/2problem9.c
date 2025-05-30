#include <stdio.h>
int main ()
{int a ,b ;
scanf("%d %d",&a,&b);
if(a==b)
{
    printf("equal");
}
else if (a>b)
{
    printf("a is biggest number ");
}
else 
{
    printf("b is biggest number ");
}


    return 0;
}/*Print the bigger one among two integers. If the two numbers are equal, print any one.
*/