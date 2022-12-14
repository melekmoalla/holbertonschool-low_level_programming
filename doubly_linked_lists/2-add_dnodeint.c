#include "lists.h"

/**
 * add_dnodeint - that adds a new node at the beginning of a dlistint_t list
 * @head: const list_t
 * @n: const int
 * Return: new
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		new->prev = NULL;
		new->n = n;
		new->next = NULL;
		*head = new;
		return (*head);
	}
	else
	{
		new->prev = NULL;
		new->n = n;
		new->next = *head;
		(*head)->prev = new;
		*head = new;
		return (*head);
	}
}
