#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: dlistint_t
 * @idx: unsigned int
 * @n: int
 * Return: new
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	dlistint_t *new;
	unsigned int i = 0;

	if (i < idx && *h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (0);
	}
	new->prev = NULL;
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *h;
		*h = new;
		return (new);
	}
	else
	{
		dlistint_t *pos = *h;
		dlistint_t *one;

		while (i < idx)
		{
			pos = pos->next;
			i++;
		}
		one = pos->prev;
		one->next = new;
		new->prev = one;
		new->next = pos;
	}
	return (new);
}
