#include<stdio.h>
int main()
{int c;
for(c=1;c<=100;c++)
{
    if(c>=1 && c<=25)
    {
        printf("%d\n",c);
    }
}
    return 0;
}/*Run a loop from 1 to 100, but print the numbers from 1 up to 25 only.
 (do not use break or continue)*/