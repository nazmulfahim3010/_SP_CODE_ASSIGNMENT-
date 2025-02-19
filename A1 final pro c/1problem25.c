#include <stdio.h>
int main(){
    char a;
    printf("enter a block letter");
    scanf("%c",&a);
    int b;
    b = a + 32;
    printf("the loweercase value is %c",b);
    return 0;
}/*Take an uppercase letter from the English alphabet as input and convert it to lowercase.
*/