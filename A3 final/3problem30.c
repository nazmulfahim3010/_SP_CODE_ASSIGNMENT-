#include<stdio.h>
int main(){
int i;
char ch;
for(i=1; i<=5; i++){
    scanf(" %c",&ch);
    if(ch>='A' && ch<='Z'){
       int a=ch+32;
       printf("%c ",a);
      
    }
     if(ch>='a' && ch<='z'){
        int b=ch-32;
        printf("%c ",b);
      
    }
}

return 0;
}/*Write a C program to take five English letters as
 input using scanf() and toggle the letters while outputting them.
  [toggle = flipping the case]
Sample Input: Fahim
Sample Output: fAHIM
*/