/*Take input two integers x and y and calculate xy.*/
#include<stdio.h>
int main()
{
    int x,y,pro=1;
   scanf("%d %d",&x,&y);
   for(int i =1;i<=y;++i){
    pro = pro*x;
   }
   printf("%d",pro);
}