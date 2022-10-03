#include <stdio.h>
/**
 * main - main print all lower character
 *
 *
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return 0;
}
