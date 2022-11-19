#include "lists.h"
#include <stdio.h>

/**
 * myStartupFun - Write a function that prints
 */

void __attribute__((constructor)) myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
