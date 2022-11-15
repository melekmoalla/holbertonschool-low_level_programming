#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: linked list to free
 * Return: none
 */

int pop_listint(listint_t **head)
{
	listint_t(*headd) = (*head);
	int result = headd->n;

	if ((*head) == NULL)
	{
		return (-1);
	}
	(*head) = (*head)->next;

	free(headd);

	return (result);
}
