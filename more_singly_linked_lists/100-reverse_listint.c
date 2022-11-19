#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the head node of a listint_t linked list
 * @head: linked list to free
 * @index: unsigned int
 * Return: none
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *current;
	listint_t *next;

	current = *head;
	while (current != NULL)
	{

		next = current->next;

		current->next = prev;

		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}