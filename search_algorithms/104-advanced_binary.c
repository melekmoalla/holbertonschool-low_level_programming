#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - a sorted array of integers using the Binary search algorithm
 *@array: int : table
 *@size: size of yhe table
 *@value: int the value that we want to checked
 *Return: i
 */

int binary_searchhh(int *array, size_t size, int value)
{
    size_t i = 0, min;
    int a, b, h = 0;

    if (array == NULL)
    {
        return (-1);
    }
    a = i;
    b = size;
    while (a <= b)
    {
        if (h == 1)
        {
            printf("Searching in array:");
            for (; i <= size - 1; i++)
            {
                if (i != size - 1)
                    printf(" %d,", array[i]);
                else
                    printf(" %d", array[i]);
            }
            printf("\n");
        }

        h = 1;
        min = (a + b) / 2;
        if (value == array[min])
            return (min - 1);
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

int advanced_binary(int *array, size_t size, int value)
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
                printf(" %d,", array[i]);
            else
                printf(" %d", array[i]);
        }
        printf("\n");
        min = (a + b) / 2;

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
        if (value == array[min] && value == array[min - 1])
            return (binary_searchhh(array, size, value));
        if (value == array[min])
        {
            return (min);
        }
    }
    return (-1);
}
