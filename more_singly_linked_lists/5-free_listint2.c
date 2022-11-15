#include "lists.h"

/**
 * free_listint2 - frees a list_t list
 * @head: linked list to free
 * Return: none
 */

void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
