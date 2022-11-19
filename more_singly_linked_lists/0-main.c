#include <stdio.h>
#include "lists.h"

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t head = {9, 0};
	size_t n;

	n = print_listint(&head);
	printf("-> %lu elements\n", n);
	return (0);
}