#include <stdio.h>

/**
 * main - print the num with ia and i<a and i!=a
 * Return: 0
 */

int main(void)
{

	int i;
	int a;

	for (i = '0'; i < '9'; i++)
	{

		for (a = '1'; a <= '9'; a++)
		{
			if ((i != a) && (i < a))
			{

				putchar(i);
				putchar(a);
				if (i < '8')
				{
					putchar(',');
					putchar(' ');
				}
				else
				{
					continue;
				}
			}
		}
		putchar('\n')
	}
	return (0);
}
