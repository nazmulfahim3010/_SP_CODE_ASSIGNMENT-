#include<stdio.h>
int main ()
{char x;
char a;
for(a='A';a<='E';a++)
{
    for(x='A';x<=a;x++)
    {
        printf("%c ",x);
    }
    printf("\n");
}
    return 0;
}