#include<stdio.h>
int main()
{int c;
for (c=5;c<=105;c++)
{ 
    printf("%d\n",c);
    if ( c==25)
    {
     break;
    }
}
    return 0;
}/*Run a loop from 5 to 105, but print the numbers from 5 up to 25 only. (use break)*/