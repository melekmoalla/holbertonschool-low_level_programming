#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: const list_t
 * Return: count
 */

size_t print_listint(const listint_t *h)
{
	int n;
	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		n++;
		printf("\n");
	}
	return (n);
}