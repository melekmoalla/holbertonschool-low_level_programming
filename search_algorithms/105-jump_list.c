#include <stdio.h>
#include "search_algos.h"
#include <math.h>

listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t jump = 0, b = 0, h = 0;
    listint_t *current, *m, *z = list;

    if (list == NULL)
        return NULL;

    current = list;
    m = list;
    jump = sqrt(size);

    while (current->next)
    {
        while (m->index < jump)
        {
            m = m->next;
        }
        while (current->index < jump)
        {
            if (current->n == value)
            {
                break;
            }
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
                {
                    break;
                }
                z = z->next;
            }
            return (current);
        }
        printf("Value checked at index [%ld] = [%d]\n", jump, current->n);
        if (jump < size - 1)
        {
            z = current;
        }
        b = jump;

        if (jump < size - 1)
        {
            jump += sqrt(size);
        }
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