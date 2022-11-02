#include "variadic_functions.h"

/**
 * print_numbers - fonction to do sum for many parametre
 *@separator: cont char for the ', '
 *@n:const unsigned int
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	/*initialize the list*/
	va_start(list, n);
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(list, int));
			if (separator != NULL)
			{
				if (i != n - 1)
				{
					printf("%s", separator);
				}
				else
				{
					printf("\n");
				}
			}
			else
			{
				printf("\n");
			}
		}
		va_end(list);
	}
}
