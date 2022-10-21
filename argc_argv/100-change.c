#include <stdio.h>
#include <stdlib.h>
/**
 * main -  a program that adds positive numbers.
 *@argc: int
 *@argv: char
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int res = 0;
	int v = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	v = atoi(argv[1]);
	if (v < 0)
	{
		printf("0\n");
		return (0);
	}
	if (v == 0)
		return 0;

	for (i = 0; i < m; i++)
	{
		if (coins[i] <= V)
		{
			int sub_res = minCoins(coins, m, V - coins[i]);

			if (sub_res != 0 && sub_res + 1 < res)
			{
				res = sub_res + 1;
			}
		}
	}
	return (res);
}
