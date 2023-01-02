#include "search_algos.h"

/**
 * linear_search - function that prints a string in reverse.
 *@array: int : table
 *@size: size of yhe table
 *@value: int the value that we want to checked
 *Return: i
 */

int binary_search(int *array, size_t size, int value)
{
    size_t i = 0, min;
    int a, b;

    if (array == NULL)
    {
        return (-1);
    }
    a = i;
    b = size - 1;
    while (a <= b)
    {
        printf("Searching in array:");
        for (; i <= size - 1; i++)
        {
            if (i != size - 1)
            {
                printf(" %d,", array[i]);
            }
            else
            {
                printf(" %d", array[i]);
            }
        }
        printf("\n");
        min = (a + b) / 2;
        if (value == array[min])
        {
            return (min);
        }
        if (value < array[min])
        {
            size = min;
            b = size;
            i = a;
        }
        if (value > array[min])
        {
            i = min + 1;
            a = i;
        }
    }
    return (-1);
}