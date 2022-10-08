#include <stdio.h>

/**
 * main - print the num if (i != a) && (a != b) && (i < a) && (a < b))
 * Return: 0
 */

int main(void)
{

	int i;
	int a;
	int b;

	for (i = '0'; i <= '7'; i++)
	{
		for (a = '1'; a <= '8'; a++)
		{

			for (b = '2'; b <= '9'; b++)
			{
				if ((i != a) && (a != b) && (i < a) && (a < b))
				{

					putchar(i);
					putchar(a);
					putchar(b);

					if (i < '7')
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
		}
	}
	putchar('\n');
	return (0);
}
