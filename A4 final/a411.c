/*Print the series up to hundred: 1, 2, 4, 7, 11, 16, 22, …. (<= 100)

*/
#include<stdio.h>
int main()
{
    int i,j=0;
    for(i=1;i<=100;i+=j){
        j++;
        printf("%d",i);
        if(i>=1&&i<92)
        {
            printf(",");
        }
    }
}