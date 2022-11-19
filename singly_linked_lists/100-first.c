#include "lists.h"

/**
 * myStartupFun - Write a function that prints
 * @head: linked list to free
 */

void myStartupFun(void) __attribute__((constructor));
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
