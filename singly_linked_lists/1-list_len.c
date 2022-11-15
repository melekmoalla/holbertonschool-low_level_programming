#include "lists.h"

/**
 * list_len - function returns the number of elements in a linked list_t list
 * @h: const list_t
 * Return: i
 */

size_t list_len(const list_t *h)
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
