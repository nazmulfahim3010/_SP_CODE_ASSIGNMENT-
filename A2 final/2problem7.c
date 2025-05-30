/*Take an integer input and check if both 5 and 6 are factors of the number or not.
*/
#include<stdio.h>
int main (){
int a;
scanf("%d",&a);
if(a%5==0 && a%6==0)
{
    printf("the number is factor of 5 and 6");
}
else 
{
    printf("this is not a factor of 5 and 6 ");
}

    return 0;
}