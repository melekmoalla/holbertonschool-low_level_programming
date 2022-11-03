#include "variadic_functions.h"

/**
 * printf_char - fonction to print char
 * @args: va_list
 */

void printf_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * printf_int - fonction to print integeer
 * @args: va_list
 */

void printf_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * printf_float - fonction to print a number float
 * @args: va_list
 */

void printf_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * printf_st - fonction to print string
 * @args: va_list
 */

void printf_st(va_list args)
{
	char *st = va_arg(args, char *);

	printf("%s", st ? st : "(nil)");
}

/**
 * print_all - fonction to print all type s of arguments
 * @format: const char *condt
 */

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

	while (format[z] != '\0')
	{
		a = strlen(format);
		while (i < 4)
		{
			if (ops[i].opp == format[z])
			{
				ops[i].f(args);

				if (z < a - 1)
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
