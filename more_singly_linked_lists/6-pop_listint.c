#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: linked list to free
 * Return: none
 */

int pop_listint(listint_t **head)
{
	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	else
	{
		listint_t(*headd) = (*head);
		int result = headd->n;

		(*head) = (*head)->next;

		free(headd);

		return (result);
	}
}
