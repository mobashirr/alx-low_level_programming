#include "lists.h"

/**
 * add_dnodeint_end - add node at end
 * @head: head
 * @n: element that will be added
 * Return: address of new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new, *current;

    new = malloc(sizeof(dlistint_t));
    if (!new)
        return (NULL);

    new->n = n;
    new->prev = NULL;
    new->next = NULL;


    if (!(*head))
    {
        *head = new;
        return (new);
    }

    current = *head;
    while (current->next)
    {
        current = current->next;
    }

    current->next = new;
    new->prev = current;

    return (new);
}
