#include<stdio.h>
int main()
{int c;
for (c=100;c>=1;c-=2)
{
    printf("%d",c);
    
    if(c>=3 && c<=100)
    {
         printf(",");    
    }
    

}
    return 0;
}/*Write a C program to print all even integers from 1 to 100 in reverse order
. [100, 98, 96, ……, 2]*/