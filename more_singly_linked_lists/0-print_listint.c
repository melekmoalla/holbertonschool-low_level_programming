#include "lists.h"

/**
 * print_listint - that prints all the elements of a listint_t list.
 * @h: const list_t
 * Return: count
 */

size_t print_listint(const listint_t *h)
{
	unsigned int n;

	n = 0;
	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		n++;
	}

	return (n);
}