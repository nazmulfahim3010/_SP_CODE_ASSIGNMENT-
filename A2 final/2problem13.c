#include<stdio.h>
int main ()
{ char a;
    printf("Type a letter ->> ");
    scanf("%c",&a) ;
     
    if( (a == 'A'|| a == 'E'|| a== 'I'|| a== 'O'|| a=='U') ||( a == 'a'||a== 'e'|| a== 'i'|| a=='o'|| a== 'u'))
    {
        printf("vowel");
    }
    
    else if((a>= 'A'&& a<='Z')||(a>='a'&& a<='z'))
    {
        printf("consonant");
    }
    else
    {
        printf(" not an alphabet");

    }

    return 0;
}/*Take an English letter as input and check whether it is a vowel or a consonant.*/