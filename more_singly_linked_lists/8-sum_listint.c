#include "lists.h"

/**
 * sum_listint - deletes the head node of a listint_t linked list
 * @head: linked list to free
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
