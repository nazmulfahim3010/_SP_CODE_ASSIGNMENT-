/*Print the series up to the 100th member of the series:
 1, 2, 4, 7, 11, 16, 22, ….
*/#include<stdio.h>
int main()
{
    int i,j=0;
    for(i=1;i<=100;i++)
    {
        j=j+i;
       
    }
     printf("%d ",j);
}