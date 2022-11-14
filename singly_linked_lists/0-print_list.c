#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: const list_t
 * Return: count
*/

size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%d] ", h->len);
			printf("%s", h->str);
		}
		h = h->next;
		count++;
		printf("\n");
	}
	return (count);
}
