#include "main.h"

/**
 * puts2 - write  a paragraph by 2
 *@str: string
 */

void puts2(char *str)
{
	int b;
	int i;

	b = strlen(str) - 1;

	for (i = 0; i <= b; i += 2)
	{
		printf("%c", (str[i]));
	}
	printf("\n");
}
