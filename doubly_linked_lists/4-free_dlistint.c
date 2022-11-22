#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: dlistint_t
 */

void free_dlistint(dlistint_t *head)
{

	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
