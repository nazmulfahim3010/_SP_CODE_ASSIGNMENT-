# include <stdio.h>
int main ()
{int a,b ;
    char c;
    printf("enter the first number :");
    
    scanf("%d",&a);
    printf("enter the last number :");
    scanf("%d\n",&b);
   printf("enter ther operation : ");
    scanf ("%c",&c);
     
 
    if (c =='+')
    {
    int q= a +b;
    printf("%d + %d = %d",a,b,q);
    }
    else if ( c == '-')
    {
    int w = a - b;
    printf("%d - %d =%d",a,b,w);
    }
    else if ( c == '*')
    {
        int e = a *b;
        printf("%d * %d = %d",a,b,e);
    }
    else if ( c == '/')
    {
        int t = a/b;
        printf("%d / %d = %d",a,b,t);
    }
    else 
    {
        printf("character not difined ");
    }
    return 0;

    
}/*Build a simple calculator. Take input two numbers and a character. If the character is ‘+’, add the two numbers. Similarly do the relevant operations for ‘-’, ‘*’, ‘/’ etc. See the sample input and output below:
*/