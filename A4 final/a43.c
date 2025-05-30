/*Write a program to print the factorial of a number. 
*/
#include<stdio.h>
int main()
{
    int num,pro=1;
    scanf("%d",&num);
    for(int i=1;i<=num;++i){
        pro=pro*i;
    }
    printf("%d",pro);
}