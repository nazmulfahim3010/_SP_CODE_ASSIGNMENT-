# include <stdio.h>
int main ()
{int age ;
scanf ("%d",&age);
if(age<=125 && age>=0)
{


if (age >= 18)
{

    printf("eligiable for vote");

}
else if(age<18)
{
    printf("not eiligable for vote");
}
}
else{
    printf("invalid age");
}
    return 0;
}/*Take the age of a person (integer) as input and check if he is eligible to vote or not (at least 18 years old or not).
*/