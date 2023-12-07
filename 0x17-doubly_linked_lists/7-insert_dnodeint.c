#include "lists.h"

/**
 * insert_dnodeint_at_index - add new node at index given
 * @h: head
 * @idx: index
 * @n: element
 * Return: new node or NULL if failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    unsigned int i = 0;
    dlistint_t *ptr = NULL, *new = NULL;

    new = malloc(sizeof(dlistint_t));
    if (!new)
        return (NULL);
    new->n = n;

    if (!(*h) && idx == 0)
    {
        *h = new;
        return (new);
    }

    ptr = *h;
    while (ptr && i < idx)
    {
        if (i == idx - 1)
        {
            new->prev = ptr;
            new->next = ptr->next;
            if (ptr->next)
                ptr->next->prev = new;
            ptr->next = new;
            return (new);
        }
        ptr = ptr->next;
        ++i;
    }

    free(new);
    return (NULL);
}
