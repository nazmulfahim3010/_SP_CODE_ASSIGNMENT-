#include<stdio.h>

int main()
{
    int i,len=0,temp;
    char source[100];
    gets(source);
    for(len=0;source[len]!=0;len++);//lenength
    for(i=0;i<len/2;i++)
    {
       temp=source[i];
       source[i]=source[len-1-i];
       source[len-1-i]=temp;
    }
    printf("%s",source);
 return 0;
}