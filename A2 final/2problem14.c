#include<stdio.h>
int main ()
{char a;
    printf("Type a letter ->> ");
    scanf("%c",&a) ;
    
    
    if((a>= 'A'&& a<='Z')||(a>='a'&& a<='z'))
    {
        printf("alphabet");
    }
    else
    {
        printf(" not an alphabet");

    }

    return 0 ;
}/*Check whether a character is an alphabet or not
*/