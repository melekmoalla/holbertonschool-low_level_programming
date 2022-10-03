#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all the number
 * Return: 0
 */

int main(void)
{
	char ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
