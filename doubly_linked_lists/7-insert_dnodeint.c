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

	dlistint_t *new, *temp = *h, *temp2;

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
	while (idx != 1)
	{
		temp = temp->next;
		idx--;
	}
	temp2 = temp->next;
	temp->next = new;
	temp2->prev = new;
	new->next = temp2;
	new->prev = temp;
	return (new);
}
