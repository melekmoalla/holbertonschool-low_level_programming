#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint -  function that reverses a listint_t linked list.
 * @head: linked list to free
 * Return: the first thing head
 */

listint_t *reverse_listint(listint_t **head)
{

	listint_t *prev = NULL, *next_node = NULL;

	while ((*head))

	{

		next_node = (*head)->next;

		(*head)->next = prev;

		prev = (*head);

		(*head) = next_node;
	}
	*head = prev;
	return (*head);
}

