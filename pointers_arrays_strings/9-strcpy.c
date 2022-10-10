#include "main.h"

/**
 * print_array - write  a array
 *@a: int
 *@n: int
 */

char *_strcpy(char *dest, char *src)
{
    int i;

    for (i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];

    return dest;
}
