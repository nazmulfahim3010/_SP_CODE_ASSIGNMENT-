#include <stdio.h>
int main ()
{ int a,c,even=0,odd=0;
scanf ("%d",&a);
while (a!=1)
{
    c=a%10;
    a=a/10;
    a++;
    if (c%2==0)
    {
            even++;
    }
    else if ( c%2!=0)
    {
        odd++;
    }
   
}
printf("%d",odd);
  

    return 0;
}/*Take a 5-digit integer and input and print the number of odd digits in it.

Input: 15251
Output: 4
 */