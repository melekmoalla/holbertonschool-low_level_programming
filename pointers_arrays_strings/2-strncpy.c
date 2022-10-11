#include "main.h"

/**
 * swap_int - swap two number
 * @a :int
 * @b :int
 */

char *_strncpy(char *dest, char *src, int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }
    for (; i < n; i++)
    {
        dest[i] = '\0';
    }

    return (dest);
}