/*Write a program in C to print the product of the first 5 natural numbers.
*/
#include<stdio.h>
int main ()
{
    int num,pro=1;
    for(int i =1;i<=5;++i){
        pro=pro*i;
    }
    printf("%d",pro);
}
