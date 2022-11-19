#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *current;
	listint_t *next;

	if (!head || *head == NULL)
	{
		return(NULL);
	}
	else
	{
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
}