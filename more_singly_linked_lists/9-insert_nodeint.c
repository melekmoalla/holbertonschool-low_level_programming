#include "lists.h"

/**
 * *insert_nodeint_at_index - insert node at a given position
 * @head: head element of the list
 * @idx: index of the list to insert a new node
 * @n: integer n
 * Return: New node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a = 0;
	listint_t *new_node, *prev_node, *next_node;

	if (a < idx && *head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	prev_node = *head;

	while (a < (idx - 1))
	{
		if (!(prev_node))
		{
			return (NULL);
		}
		prev_node = prev_node->next;
		a++;
	}

	next_node = prev_node->next;
	new_node->n = n;
	new_node->next = next_node;
	prev_node->next = new_node;
	return (new_node);
}
