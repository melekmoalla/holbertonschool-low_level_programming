#include "main.h"
#include <stdio.h>

/**
 *check_sqrt - check prim
 *@N: int
 *@mid: int
 * Return: Always 0.
 */

int check_sqrt(int mid, int N)
{

	if ((mid * mid == N) && ((mid + 1) * (mid + 1) > N))
	{
		return (mid);
	}

	if (mid * mid > N)
	{
		return (-1);
	}
	else
	{
		return (check_sqrt(mid + 1, N));
	}
}

/**
 *_sqrt_recursion - that returns 1 if the input integer is a prime number
 *@n:int
 *Return: 0 or 1 or -1 or the sqrt
 */

int _sqrt_recursion(int n)
{

	if (n == 0)
		return (0);
	else
	{
		return (check_sqrt(1, n));
	}
}

