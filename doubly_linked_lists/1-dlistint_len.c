#include "lists.h"

/**
 * dlistint_len -   prints all the elements of a dlistint_t list.
 * @h: const list_t
 * Return: n
 */

size_t dlistint_len(const dlistint_t *h)
{
	int n;

	n = 0;
	while (h != NULL)
	{
		h = h->next;
		n++;
	}

	return (n);
}
