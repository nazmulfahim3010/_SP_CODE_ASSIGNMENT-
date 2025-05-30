#include<stdio.h>
int main()
{int up=0 ,low=0,num=0,sp=0,c;
char x;
for (c=1;c<=5;c++)
{
    scanf(" %c",&x);
    if (x>='A'&& x<='Z')
    {
        up++;
    }
    else if ( x>='a'&&x<='z')
    {
        low++;
    }
     else if (x>='0'&&x<='9')
    {
        num++;
    }
    else{
        sp++;
    }

    
}
printf("-> up %d\n-> low %d\n-> sp %d\n -> num %d\n",up,low,sp,num);

  
  return 0;
}/*Write a C program to take a hundred characters as input using
 scanf() and output the number of uppercase letters,
  lowercase letters, digits, and special characters among them.
*/