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
		return (0);
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	else
	{
		dlistint_t *pos = *h;

		while (i < idx - 1)
		{
			if (pos == NULL)
			{
				return (NULL);
			}
			pos = pos->next;
			i++;
		}
		if (pos->next == NULL)
		{
			return (add_dnodeint_end(h, n));
		}
		else
		{
			new->n = n;
			new->prev = pos;
			new->next = pos->next;
			pos->next->prev = new;
			pos->next = new;
		}
	}
	return (new);
}
