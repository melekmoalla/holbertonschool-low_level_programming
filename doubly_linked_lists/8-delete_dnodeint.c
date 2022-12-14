#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index
 * @head: dlistint_t
 * @index: unsigned int
 * Return: 1 OR -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *pos = *head, *fr = *head;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next == NULL)
		{
			*head = NULL;
			return (1);
		}
		*head = (*head)->next;
		free(fr);
		fr = NULL;
		(*head)->prev = NULL;
		return (1);
	}
	while (i < index)
	{
		if (!pos)
			return (-1);
		pos = pos->next;
		i++;
	}
	if (pos->next == NULL)
	{
		fr = pos;
		pos = pos->prev;
		pos->next = NULL;
		free(fr);
	}
	else
	{
		fr = pos;
		pos->prev->next = pos->next;
		pos->next->prev = pos->prev;
		free(fr);
	}
	return (1);
}
