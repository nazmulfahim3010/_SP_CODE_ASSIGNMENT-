#include <stdio.h>
int main ()
{int c,a,pro;
scanf("%d",&a);
for (c=1;c<=10;c++)
{
    pro=a*c;
    printf("%d x %d = %d\n",a,c,pro);
}

    return 0;
}/*Take an integer number as input and print out its times table (multiplication table)
 as output.
Sample input: 5
Sample output: 
5x1=5
5x2=10
5x3 =15
………..
……….
5x10=50
*/