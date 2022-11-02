#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 *@separator: cont char for the ', '
 *@n:const unsigned int
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *a;

	/*initialize the list*/
	va_start(list, n);
	{

		for (i = 0; i < n; i++)
		{
			a = va_arg(list, char *);
			if (a == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", a);
				if (separator != NULL)
				{
					if (i != n - 1)
					{
						printf("%s", separator);
					}
				}
			}
		}
		printf("\n");
		va_end(list);
	}
}
