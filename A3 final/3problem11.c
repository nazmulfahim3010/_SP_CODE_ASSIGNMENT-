#include <stdio.h>
int main ()
{int c;
for (c=5;c<=105;c++)
{
    
    if (c>=26)
    {
        continue;
    }
    printf("%d\n",c);
}


    return 0;
}/*Run a loop from 5 to 105, but print the numbers from 5 up to 25 only. 
(use continue)*/