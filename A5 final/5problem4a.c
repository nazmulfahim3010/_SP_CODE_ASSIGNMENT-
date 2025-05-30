#include<stdio.h>
int main (){
    int i,j;
    for(i=7;i>=1;i--)
    {
        for(j=6;j>=0;j--)
        {
            if(i>j)
            {
                printf("*");
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}

