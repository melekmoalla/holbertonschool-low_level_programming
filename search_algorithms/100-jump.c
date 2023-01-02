#include "search_algos.h"
#include <math.h>

/**
 * binary_search - a sorted array of integers using the Binary search algorithm
 *@array: int : table
 *@size: size of yhe table
 *@value: int the value that we want to checked
 *Return: i
 */

int jump_search(int *array, size_t size, int value)
{
    size_t i = 0, m = 0, a = 0, b = 0, z = 0;

    if (array == NULL)
    {
        return (-1);
    }
    printf("Value checked array[%ld] = [%d]\n", i, array[i]);
    while (i <= size - 1)
    {
        m += sqrt(size - 1);
        for (i = a; i <= m; i++)
        {
            if (i == size)
            {
                break;
            }
            if (value == array[i])
            {
                printf("Value found between indexes [%ld] and [%ld]\n", a, m);
                for (b = a; b <= i; b++)
                {
                    printf("Value checked array[%ld] = [%d]\n", b, array[b]);
                }
                return (i);
            }
        }
        if (i == size && size % 2 != 0)
        {
            m = a;
            break;
        }
        printf("Value checked array[%ld] = [%d]\n", m, array[m]);
        a = m;
    }
    m += sqrt(size - 1);
    printf("Value found between indexes [%ld] and [%ld]\n", a, m);
    for (z = a; z <= size - 1; z++)
    {
        printf("Value checked array[%ld] = [%d]\n", z, array[z]);
    }
    return (-1);
}
