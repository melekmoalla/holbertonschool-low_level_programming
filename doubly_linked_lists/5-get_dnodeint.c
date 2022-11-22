#include "lists.h"

/**
 * fget_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: dlistint_t
 * @index: unsigned int
 * Return: c
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *c = head;
	unsigned int i = 0;

	while (i < index)
	{
		if (!head)
		{
			return (NULL);
		}
		c = c->next;
		i++;
	}
	return (c);
}
