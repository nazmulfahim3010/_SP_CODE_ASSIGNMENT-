#include <stdio.h>
int main ()
{int a;
scanf ("%d",&a);
int r1 = a%10;
int ex1 = a/10;
int r2 = ex1 %10;
int ex2 = ex1/10;
int mid = ex2%10;
int ex3 = ex2/10;
int l2 = ex3%10;
int ex4 = ex3/10;
int l1 = ex4 %10;
if (l1==r1&&l2==r2)
{
    printf(" Palindrome");
}
else 
{
    printf("Not Palindrome");
}

    return 0;
}/*Write a C program to check whether a given 5-digit integer is a palindrome or not.

Input: 15251
Output: Palindrome
Input: 15315
Output: Not Palindrome
*/