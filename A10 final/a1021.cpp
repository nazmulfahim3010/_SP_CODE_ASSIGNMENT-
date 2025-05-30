/*Take input two strings and compare the two strings. If they are equal, print 0. Else, if 
the first one is lexicographically greater, print 1. If the second one is greater, print -1.*/
#include <stdio.h>

int main() {
    int i = 0;
    char s1[100], s2[100];
    printf("Enter first: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter second: ");
    fgets(s2, sizeof(s2), stdin);

    for (i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] == '\n')
        {
            s1[i] = '\0';
            break;
        }
    }

    for (i = 0; s2[i] != '\0'; i++)
    {
        if (s2[i] == '\n')
        {
            s2[i] = '\0';
            break;
        }
    }

    for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
    {
        if (s1[i] < s2[i])
        {
            printf("-1\n");
            return 0;
        }
        else if (s1[i] > s2[i])
        {
            printf("1\n");
            return 0;
        }
    }

    printf("0\n");
    return 0;
}