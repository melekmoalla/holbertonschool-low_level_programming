#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the head node of a listint_t linked list
 * @head: linked list to free
 * @index: unsigned int
 * Return: none
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *c = *head;
	listint_t *perv = *head;

	if (!head || *head == NULL)
	{
		return (-1);
	}
	else if (index == 0)
	{
		*head = c->next;
		free(c);
		c = NULL;
		return (1);
	}
	else
	{
		while (index)
		{
			if (!head)
			{
				return (-1);
			}
			perv = c;
			c = c->next;
			index--;
		}
		perv->next = c->next;
		free(c);
		c = NULL;
	}
	return (1);
}
