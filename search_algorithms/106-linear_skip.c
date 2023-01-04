#include <stdio.h>
#include "search_algos.h"
#include <math.h>

/**
 * verification - calcult size
 *@list: listint_t : lidt of the table
 *@size: size of the list
 *Return: size
 */

int verification(size_t size, skiplist_t *list)
{
	skiplist_t *o = list;

	while (o)
	{
		size++;
		o = o->next;
	}
	return (size);
}

/**
 * verification2 - verification2
 *@jump:  size_t
 *@size: size of the list
 *Return: size
 */

int verification2(size_t size, size_t jump)
{
	if (jump < size - 1)
		jump += sqrt(size);
	return (jump);
}

/**
 *linear_skip - searches for a value in a sorted skip list of integers.
 *@list: listint_t : lidt of the table
 *@value: int the value that we want to checked
 *Return: current or null if faild
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{ size_t jump = 0, b = 0, h = 0, size = 0;
	skiplist_t *current = list, *m = list, *z = list;

	if (list == NULL)
		return (0);
	size = verification(size, list);
	jump = sqrt(size);
	while (current->next)
	{
		while (m->index < jump)
			m = m->next;
		while (current->index < jump)
		{
			if (current->n == value)
				break;
			current = current->next; }
		if (current->n == value)
		{ printf("Value checked at index [%ld] = [%d]\n", jump, m->n);
			printf("Value found between indexes [%ld] and [%ld]\n", b, jump);
			while (z)
			{ printf("Value checked at index [%ld] = [%d]\n", z->index, z->n);
				if (z == current)
					break;
				z = z->next; }
			return (current); }
		printf("Value checked at index [%ld] = [%d]\n", jump, current->n);
		if (jump < size - 1)
			z = current;
		b = jump;
		jump = verification2(size, jump);
		if (jump > size - 1 && h == 0)
		{ h = b;
			if (size % 2 == 0)
				jump = size - 1; else
			{ jump = size - 1;
				break; } } }
	printf("Value found between indexes [%ld] and [%ld]\n", h, jump);
	while (z)
	{ printf("Value checked at index [%ld] = [%d]\n", z->index, z->n);
		z = z->next; }
	return (NULL); }
