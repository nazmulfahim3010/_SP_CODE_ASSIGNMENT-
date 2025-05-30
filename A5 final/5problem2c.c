#include <stdio.h>
int main ()
{char a,b;
for(a='E';a>='A';a--)
{
    for(b='A';b<=a;b++)
    {
        printf("%c ",b);
    }
    printf("\n");
}

    return 0;
}