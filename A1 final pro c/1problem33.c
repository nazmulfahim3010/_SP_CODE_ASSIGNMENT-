#include <stdio.h>
int main()
    {
int a,f,s,new;
printf("enter 2 digit number-> ");
scanf("%d",&a);
f = a /10;
s = a%10;
new = (s*10)+(f*1);
printf("the reverse number is %d",new);

        return 0;
    }//Take a two digit integer as input and output the reverse number.