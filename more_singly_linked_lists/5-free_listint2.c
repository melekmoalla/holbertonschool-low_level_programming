#include "lists.h"

/**
 * free_listint2 - frees a list_t list
 * @head: linked list to free
 * Return: none
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL || *head == NULL)
		return;

	while ((*head)->next != NULL)
	{
		current = *head;
		*head = (*(head))->next;
		free(current);
	}
	*head = NULL;
}
