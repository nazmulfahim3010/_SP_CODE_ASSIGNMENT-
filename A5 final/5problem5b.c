#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=7-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
         {
             if(k==1||i==7||k==2*i-1)
             printf("*");
             else
                printf(" ");
         }
        printf("\n");
    }
    return 0;
}

