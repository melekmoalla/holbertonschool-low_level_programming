#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list.
 * @head: linked list
 * @index: the position
 * Return: head
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
	{
		return (NULL);
	}
	while (i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
