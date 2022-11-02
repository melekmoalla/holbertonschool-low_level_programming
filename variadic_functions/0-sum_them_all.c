#include "variadic_functions.h"

/**
 * sum_them_all - fonction to do sum for many parametre
 *@n:const unsigned int
 *Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum = 0;
	unsigned int i;

	/*initialize the list*/
	va_start(list, n);
	{

		for (i = 0; i < n; i++)
		{
			sum += va_arg(list, int);
		}
		va_end(list);
	}
	return (sum);
}

