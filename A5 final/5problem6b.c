#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=7;i>=1;i--)
    {
        for(j=7;j>i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
         {
             if(i==7||k==1||k==2*i-1)
             printf("*");
             else
               printf(" ");
         }
        printf("\n");
    }
    return 0;
}


