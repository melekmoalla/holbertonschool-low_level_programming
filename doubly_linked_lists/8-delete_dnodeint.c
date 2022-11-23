#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: dlistint_t
 * @idx: unsigned int
 * @n: int
 * Return: new
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    unsigned int i = 0;
    dlistint_t *pos = *head, *fr;

    if (head == NULL || *head == NULL)
    {
        return (-1);
    }
    if (index == 0)
    {
        if ((*head)->next == NULL)
        {
            *head = NULL;
            return (-1);
        }
        fr = *head;
        *head = (*head)->next;
        free(fr);
        fr = NULL;
        (*head)->prev = NULL;
        return (1);
    }
    else
    {
        while (i < index)
        {
            if (!pos)
            {
                return (-1);
            }
            pos = pos->next;
            i++;
        }
        if (pos->next == NULL)
        {
            fr = pos;
            pos = pos->prev;
            pos->next = NULL;
            free(fr);

            return (1);
        }
        else
        {
            fr = pos;
            pos->prev->next = pos->next;
            pos->next->prev = pos->prev;
            pos = pos->prev;
            free(fr);
            fr = NULL;
            return (1);
        }
    }
}