#include<stdio.h>
int main ()
    {char a;
    scanf("%c",&a);
    if (a>='A'&& a<='Z')
    {
        printf("uppercase");
    }
    else if (a>='a'&&a<='z')
    {
        printf("lowercase");
    }
    else 
    {
        printf("not eligable ");
    }
    return 0;
}/*Take an English letter as input and check whether it is uppercase or lowercase.
*/