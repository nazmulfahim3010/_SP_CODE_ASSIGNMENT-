#include <stdio.h>
int main ()
{int a,b,c;
        printf("Enter three number -> ");
        scanf("%d%d%d",&a,&b,&c);
        if (a > b && a > c)
        {
            printf("the bigget number is %d",a);
        }
        else if ( b > c)
        {
            printf("the biggest number is %d",b);
        }
        else 
        {
            printf("the biggest number is %d",c);
        }

    return 0;
}/*Find the largest one among three integers.*/