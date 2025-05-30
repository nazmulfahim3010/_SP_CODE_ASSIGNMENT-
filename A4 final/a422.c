/*Write a C program to input an integer n and print all the prime factors of the number. 
*/
#include <stdio.h>
int main()
{
    int i,num,j,sto=0;
    scanf("%d",&num);
    for(i=2;i<=num;i=i+1)
        {
            if(num%i==0)
            {
                int prime=1;
                sto=i;
                for(j=2;j*j<=sto;j++)
                {
                    if(sto%j==0)
                    {
                        prime=0;
                        break;
                    }
                }
                if(prime==1)
                {
                     printf("%d\n",sto);
                }
            }
        }
    return 0;
}