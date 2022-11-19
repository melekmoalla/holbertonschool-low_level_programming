#include "lists.h"

/**
 * listint_len - that returns the number of elements in a linked listint_t list.
 * @h: const list_t
 * Return: count
 */

size_t listint_len(const listint_t *h)
{
	int i = 1;

	if (h == NULL)
	{
		return (0);
	}
	while (h->next)
	{
		h = h->next;
		i++;
	}
	return (i);
}
