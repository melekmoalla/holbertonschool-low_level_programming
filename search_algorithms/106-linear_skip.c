#include <stdio.h>
#include "search_algos.h"
#include <math.h>

/**
 *jump_list -  sorted list of integers using the Jump search algorithm
 *@list: listint_t : lidt of the table
 *@size: size of yhe table
 *@value: int the value that we want to checked
 *Return: current or null if faild
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
    size_t jump = 0, b = 0, h = 0, size = 0;
    skiplist_t *current = list, *m, *z = list, *o = list;

    if (list == NULL)
        return (NULL);
    while (o)
    {
        size++;
        o = o->next;
    }
    m = list;
    jump = sqrt(size);
    while (current->next)
    {
        while (m->index < jump)
            m = m->next;
        while (current->index < jump)
        {
            if (current->n == value)
                break;
            current = current->next;
        }
        if (current->n == value)
        {
            printf("Value checked at index [%ld] = [%d]\n", jump, m->n);
            printf("Value found between indexes [%ld] and [%ld]\n", b, jump);
            while (z)
            {
                printf("Value checked at index [%ld] = [%d]\n", z->index, z->n);
                if (z == current)
                    break;
                z = z->next;
            }
            return (current);
        }
        printf("Value checked at index [%ld] = [%d]\n", jump, current->n);
        if (jump < size - 1)
            z = current;
        b = jump;
        if (jump < size - 1)
            jump += sqrt(size);
        if (jump > size - 1 && h == 0)
        {
            h = b;
            jump = size - 1;
        }
    }
    printf("Value found between indexes [%ld] and [%ld]\n", h, jump);
    while (z)
    {
        printf("Value checked at index [%ld] = [%d]\n", z->index, z->n);
        z = z->next;
    }
    return (NULL);
}
