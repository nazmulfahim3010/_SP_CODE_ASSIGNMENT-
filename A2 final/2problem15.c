#include <stdio.h>
int main ()
{char a;
    printf("Type a letter ->> ");
    scanf("%c",&a) ;
      if((a>= 'A'&& a<='Z')||(a>='a'&& a<='z'))
    {
        printf("consonant");
    }
    else if(a>='0' && a<='9')
    {
        printf("number");
    }
    else
    {
        printf(" special character");

    }
    return 0;
}/*Check whether a character is an alphabet, digit, or special character.
*/