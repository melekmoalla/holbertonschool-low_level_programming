#include "main.h"

/**
 * *_strdup - check the code.
 *@str: int
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
    int a = 0;
    char *t = NULL;
    int l = 0;
    int i;
    int p = 0;
    int b = 0;
    int j;

    if (s1 == 0)
    {
        s1 = "";
    }

    if (s2 == 0)
    {
        s2 = "";
    }

    l = strlen(s1);
    a = strlen(s2);
    p = a + l;
    t = malloc(sizeof(char) * (p + 1));

    if (!t)
    {
        return (NULL);
    }

    for (i = 0; i < l; i++)
    {
        *(t + i) = *(s1 + i);
    }

    for (j = i; j < p; j++)
    {

        *(t + j) = *(s2 + b);
        b++;
    }
    return (t);
}
