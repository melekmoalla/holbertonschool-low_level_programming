#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 *@separator: cont char for the ', '
 *@n:const unsigned int
 */

void print_all(const char *const format, ...)
{
	{
		va_list args;
		int i = 0;
		int a;
		char *s;

		va_start(args, format);
		i = 0;
		a = strlen(format);
		while (format[i] != '\0')
		{
			if (format[i] == 'c')
			{
				printf("%c", va_arg(args, int));
			}
			else if (format[i] == 'i')
			{
				printf("%d", va_arg(args, int));
			}
			else if (format[i] == 'f')
			{
				printf("%f", va_arg(args, double));
			}
			else if (format[i] == 's')
			{
				s = va_arg(args, char *);
				printf("%s", s ? s : "(nil)");
			}

			if (i < a - 1 && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
			{
				printf(", ");
			}
			i++;
		}
		printf("\n");
		va_end(args);
	}
}