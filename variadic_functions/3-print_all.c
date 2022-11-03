#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 *@separator: cont char for the ', '
 *@n:const unsigned int
 */

void printf_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
void printf_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
void printf_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
void printf_st(va_list args)
{
	char *st = va_arg(args, char *);
	if (*st != 0)
	{
		printf("%s", st);
	}
	else
	{
		printf("(nil)");
	}
}

void print_all(const char *const format, ...)
{

	op_t ops[] = {
		{'c', printf_char},
		{'i', printf_int},
		{'f', printf_float},
		{'s', printf_st}};

	int i = 0;
	int z = 0;
	int a;
	va_list args;

	va_start(args, format);

	a = strlen(format);

	while (format[z] != '\0')
	{
		while (i < 4)
		{
			if (ops[i].opp == format[z])
			{
				ops[i].f(args);

				if (i < a - 1)
				{
					printf(", ");
				}
			}
			i++;
		}
		i = 0;
		z++;
	}
	printf("\n");
	va_end(args);
}
