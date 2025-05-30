/*Write a C program to find up to the first n-th element in the Fibonacci series.
Fibonacci series is a series of numbers in which each number is the sum of the two preceding numbers. The series starts with 1 and 1. So the series goes like- 1, 1, 2, 3, 5, 8, 13, ... 
Sample Input: 6
Sample Output: 8
*/
#include<stdio.h>
int main()
{
   int f1=1,f2=0,f=0,n,i;
   scanf("%d",&n);
   if(n==1){
    printf("0");
   }
   else {
   for(i=0;i<=(n-1);i++)
   {
    f=f1+f2;
    f1=f2;
    f2=f;
   }
    printf("%d",f);
   }
   
return 0;
}