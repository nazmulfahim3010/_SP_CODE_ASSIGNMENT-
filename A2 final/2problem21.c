#include <stdio.h>
int main ()
{int marks;
scanf("%d",&marks);
if (marks<=100 && marks>=0)
{
    if (marks<=39&&marks>=0)
    {
        printf("F");
    }
    else if (marks>=40 && marks<=59)
    {
        printf("C");
    }
    else if (marks>=60 && marks<=69)
    {
      printf("B");
    }
    else if(marks>=70 && marks<=79)
    {
        printf("A");
    }
    else if(marks>=80 && marks<=100)
    {
        printf("A+");
    }
    
}
else 
{
    printf("not eligiable");
}

    return 0;
}/*Take marks (integer) of a student as input and print his grade as per the following chart:


Marks
Grade
0-39
F
40-59
C
60-69
B
70-79
A
80-100
A+
Below zero or above 100
Invalid

*/