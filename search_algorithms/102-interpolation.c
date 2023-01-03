
#include "search_algos.h"
#include <math.h>

/**
 * interpolation_search -  value in a sorted array of integers using the
 * Exponential search algorithm
 *@array: int : table
 *@size: size of yhe table
 *@value: int the value that we want to checked
 *Return: mid or -1 if faild
 */

int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int mid = 0;

	if (array == NULL)
	{
		return (-1);
	}
	while ((array[high] != array[low]))
	{mid = low + ((value - array[low]) * (high - low) /
	(array[high] - array[low]));
		if (value > array[high])
		{
			printf("Value checked array[%d] is out of range\n", mid);
			return (-1);
		}
		if (array[mid] < value)
		{
			printf("Value checked array[%d] = [%d]\n", mid, array[mid]);
			low = mid + 1;
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", mid, array[mid]);
			return (mid);
		}
	}
	return (-1);
}
