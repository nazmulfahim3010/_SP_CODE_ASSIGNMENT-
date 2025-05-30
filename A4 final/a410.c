/*Print the sum of series up to nth member of it: 1-2+3-4+5-6+7-8........
*/
#include<stdio.h>
int main()
{int a,c,sum=0,v,sum2=0;
scanf("%d",&a);
for(c=1;c<=a;c+=2)
{
   sum = sum +c;
}
for(v=0;v<=a;v+=2)
{
    sum2=sum2+v;
} 
int new = sum - sum2;
printf("%d ",new);

    return 0;
}
