#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_nodeint_end -  that adds a new node at the end of a listint_t list.
 * @head: first node in the list
 * @n: second node in the list
 * Return: the address of the new element, or NULL if it failed
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *c;

	new = malloc(sizeof(listint_t));
	c = *head;
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		while (c->next != NULL)
		{
			c = c->next;
		}
		c->next = new;
	}
	return (new);
}
