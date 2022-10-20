#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

char *create_array(unsigned int size, char c)
{
    char *t = 0;
    unsigned int i;

    if (size == 0)
    {
        return(0);
    }
    else
    {
        t = malloc(sizeof(unsigned int) * size);
        for (i = 0; i < size; i++)
        {
            t[i] = c;
        }
    }
    return (t);
}