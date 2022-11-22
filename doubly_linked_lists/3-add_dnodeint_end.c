#include "lists.h"

/**
 * add_dnodeint_end - that adds a new node at the end of a dlistint_t list.
 * @head: const list_t
 * @n: const int
 * Return: new
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->prev = NULL;
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		dlistint_t *tail = *head;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		new->prev = tail;
		tail->next = new;
	}
	return (new);
}
