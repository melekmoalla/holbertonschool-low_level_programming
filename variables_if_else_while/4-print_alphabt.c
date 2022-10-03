#include <stdio.h>
#include <stdlib.h>

/**
 * main - print alphabet
 * Return: 0
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
