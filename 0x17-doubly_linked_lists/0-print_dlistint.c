#include "lists.h"

/**
 * print_dlistint - print double linked list
 * @h: head of linked list
 * Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
    size_t num = 0;

    if (!h)
        return (0);
    while (h)
    {
        printf("%d\n",h->n);
        if (h->next)
            h = h->next;
        else
            break;
        ++num;
    }
    return (num);
}
