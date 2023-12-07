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

    if(!(*h))
        return (NULL);

    new = malloc(sizeof(dlistint_t));
    if (!new)
        return(NULL);
    new->n = n;

    ptr = (*h);
    while (ptr)
    {
        if (i == idx)
        {
            new->prev = ptr->prev;
            ptr->prev = new;
            new->next = ptr;
            return (new);
        }
        if (ptr->next)
        {
            ptr = ptr->next;
            ++i;
        }
        else
            break;
    }
    return (NULL);
}
