#include<stdio.h>
int main (){
char a;
    printf("enter a lowercase letter ->");
    scanf("%c",&a);
    int b;
    b = a - 32;
    printf("the uppercase value is %c",b);
    return 0;/*Take a lowercase letter from the English alphabet as input and convert it to uppercase.
*/
}