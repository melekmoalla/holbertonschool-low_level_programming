#include "main.h"
#include <stdio.h>

/**
 *IsPrime - check prim
 *@i: int
 *@number: int
 * Return: Always 0.
 */

int IsPrime(int number, int i)
{
	if (number < 2)
	{
		return (0);
	}
	if (number == i)
	{
		return (1);
	}

	else
	{
		if (number % i == 0)
			return (0);
		else
			return (IsPrime(number, i + 1));
	}
}
/**
 *is_prime_number - that returns 1 if the input integer is a prime number
 *@n:int
 *Return: 1 succes or 1 faild
 */

int is_prime_number(int n)
{
	return (IsPrime(n, 2));
}
