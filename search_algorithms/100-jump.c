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
    size_t i = 0, j, a;
    size_t m = 0;

    if (array == NULL)
    {
        return (-1);
    }
    while (array[m] <= value && m < size - 1)
    {
        m += sqrt(size);
        if (m > size)
        {
            return (-1);
        }
        if (i == 0)
        {
            printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        }
        for (j = i; j <= m; j++)
        {
            if (array[j] == value)
            {
                printf("Value found between indexes [%ld] and [%ld]\n", i, m);
                for (a = i; a <= j; a++)
                {
                    printf("Value checked array[%ld] = [%d]\n", a, array[a]);
                }
                return (j);
            }
        }
        printf("Value checked array[%ld] = [%d]\n", m, array[m]);

        i = m;
    }
    m += sqrt(size);
    printf("Value found between indexes[%ld] and [%ld]\n", i, m);
    printf("Value checked array[%ld] = [%d]\n", size - 1, array[size - 1]);
    return (-1);
}
