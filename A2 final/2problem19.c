# include <stdio.h>
int main ()
{int marks ;
scanf ("%d",&marks);
if (marks<=100 && marks >=0)
{
    if (marks <40)
    {
        printf("fail");

    }
    else {
        printf("pass");
    }
}
else {
    printf("not eligiable ");
}
    return 0;
}
/*Take the marks (integer) of a student as input and check if he failed (obtained less than 40) in the subject or not.
*/