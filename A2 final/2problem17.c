#include <stdio.h>
int main ()
{int age , sex;
scanf ("%d %c",&age,&sex);

if (sex=='M'||sex=='m')
{
    if(age<21)
    {
        printf("Not eligible");
    }
    else 
    {
        printf("eligiable");
    }
}
else if (sex=='F'||sex=='f')
{
    if (age<18)
    {
        printf("not eligable ");
    }
    else {
        printf("eligiable");
    }
}



    return 0;
}/*Take the age of a person as input (an integer) and his/her sex as a character (M for male or F for female). Check if he/she is eligible to marry.

[Women are eligible when they turn 18. For men, the age is 21.]


Sample Input: 20 M
Output: Not eligible


*/