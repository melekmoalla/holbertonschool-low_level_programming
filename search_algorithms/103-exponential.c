#include "search_algos.h"

int binary_searchh(int *array, size_t size, size_t h, int value)
{
    size_t i = h, min;
    int a, b;

    a = h;
    b = size;
    while (a <= b)
    {
        printf("Searching in array:");
        for (; i <= size; i++)
        {
            if (i != size)
                printf(" %d,", array[i]);
            else
                printf(" %d", array[i]);
        }
        printf("\n");
        min = (a + b) / 2;
        if (value == array[min])
            return (min);
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

int exponential_search(int *array, size_t size, int value)
{
    size_t i, a = 1, b = 0;

    if (array == NULL)
    {
        return (-1);
    }
    while (i < size - 1)
    {
        for (i = b; i <= a; i++)
        {
            if (array[i] == value)
            {
                a = b * 2;
                if (a > size - 1)
                {
                    a = size - 1;
                }
                printf("Value found between indexes[%ld] and [%ld]\n", b, a);
                binary_searchh(array, a, b, value);
                return (i);
            }
        }
        printf("Value checked array[%ld] = [%d]\n", a, array[a]);
        b = a;
        a *= 2;
        if (a > size - 1)
        {
            break;
        }
    }
    printf("Value found between indexes[%ld] and [%ld]\n", b, size - 1);
    binary_searchh(array, size - 1, b, value);
    return (-1);
}