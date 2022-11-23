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

	dlistint_t *new, *temp = *h;

	unsigned int i = 0;

	if (i < idx && *h == NULL)
		return (NULL);

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	for (; idx != 1; idx--)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			return (NULL);
		}
	}
	if (temp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = temp;
	new->next = temp->next;
	temp->next->prev = new;
	temp->next = new;
	return (new);
}
