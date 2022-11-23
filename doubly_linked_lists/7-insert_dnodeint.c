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

	dlistint_t *new, *temp = NULL, *temp2 = NULL;

	unsigned int i = 0;

	if (i < idx && *h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *h;
		*h = new;
	}
	while (idx != 1)
	{
		if (!temp)
		{
			return (NULL);
		}
		temp = temp->next;
		idx--;
		return (new);
	}
	if (temp->next == NULL)
	{
		temp->next = new;
		new->prev = temp;
	}
	else
	{

		temp2 = temp->next;
		temp->next = new;
		temp2->prev = new;
		new->next = temp2;
		new->prev = temp;
	}
	return (new);
}
