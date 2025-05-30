#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
         {
             if(k==1||k==2*i-1)
             printf("*");
             else
                printf(" ");
         }
        printf("\n");
    }
    for(i=4;i>=1;i--)
    {
        printf(" ");
        for(j=4;j>i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
         {
             if(k==1||k==2*i-1)
             printf("*");
             else
               printf(" ");
         }
        printf("\n");
    }
    return 0;
}

