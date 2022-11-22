#include "lists.h"

/**
 * print_dlistint -   prints all the elements of a dlistint_t list.
 * @h: const list_t
 * Return: n
 */

size_t print_dlistint(const dlistint_t *h)
{
	int n;

	n = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}

	return (n);
}
