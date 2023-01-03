#include "search_algos.h"

/**
 * binary_searchh - sorted array of integers using the Binary search algorithm
 *@array: int : table
 *@size: size of yhe table
 *@value: int the value that we want to checked
 *@h: size_t start
 */

void binary_searchh(int *array, size_t size, size_t h, int value)
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
			return;
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
}

/**
 * exponential_search -  value in a sorted array of integers using the
 * Exponential search algorithm
 *@array: int : table
 *@size: size of yhe table
 *@value: int the value that we want to checked
 *Return: mid or -1 if faild
 */

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
				printf("Value found between indexes [%ld] and [%ld]\n", b, a);
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
	printf("Value found between indexes [%ld] and [%ld]\n", b, size - 1);
	binary_searchh(array, size - 1, b, value);
	return (-1);
}
