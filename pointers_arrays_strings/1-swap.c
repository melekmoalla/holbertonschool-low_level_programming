#include "main.h"

/**
 * reset_to_98 - switch to 98
 * @n :int
 */

void swap_int(int *a, int *b)
{
    int t;

    t = *b;
    *b = *a;
    *a = t;
}