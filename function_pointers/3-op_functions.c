#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <stddef.h>

/**
 *op_add - fonction to add for two int int
 *@a: int
 *@b: int
 *Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_add - fonction to sub for two int
 *@a: int
 *@b: int
 *Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_add - fonction to add to int
 *@a: int
 *@b: int
 *Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_add - fonction to div for two int
 *@a: int
 *@b: int
 *Return: result
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 *op_add - fonction to dok mod for two int
 *@a: int
 *@b: int
 *Return: result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
