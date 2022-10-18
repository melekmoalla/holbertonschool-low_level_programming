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
        return (2);
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
 *check_sqrt - check prim
 *@N: int
 *@high: int
 *@low: int
 * Return: Always 0.
 */

int check_sqrt(int low, int high, int N)
{
    if (IsPrime(N, 2) == 2)
    {
        return (-1);
    }
    if (IsPrime(N, 2) == 1)
    {
        return (-1);
    }
    else
    {
        if (low <= high)
        {

            int mid = (low + high) / 2;

            if ((mid * mid <= N) && ((mid + 1) * (mid + 1) > N))
            {
                return mid;
            }

            else if (mid * mid < N)
            {
                return check_sqrt(mid + 1, high, N);
            }
            else
            {
                return check_sqrt(low, mid - 1, N);
            }
        }
        return (low);
    }
}
/**
 *_sqrt_recursion - that returns 1 if the input integer is a prime number
 *@n:int
 *Return: 1 or -1 or the sqrt
 */

int _sqrt_recursion(int n)
{
    if (n < 0)
    {
        return (-1);
    }
    if (n == 1)
    {
        return (1);
    }
    else
    {
        return (check_sqrt(0, n, n));
    }
}
