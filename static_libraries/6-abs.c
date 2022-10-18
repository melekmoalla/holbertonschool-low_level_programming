#include "main.h"

/**
 * _abs - compute the absolute value of a given number
 * @i: integer to compute absolute number
 *
 * Return: absolute value of the input number.
 */
int _abs(int i)
{
    if (i < 0)
        i = -i;
    if (i >= 0)
        i = i;
    return (i);
}