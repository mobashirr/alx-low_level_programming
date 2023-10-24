#include "lists.h"

/**
 * reverse_listint - reverse linked list
 * @head: ptr to ptr to struct
 * 
*/
listint_t *reverse_listint(listint_t **head)
{
    listint_t *prev = NULL;
    listint_t *current = *head;
    listint_t *next = NULL;

    while (current != NULL)
    {
        next = current->next; /* Save the next node*/
        current->next = prev; /*Change the current node's next to the previous node*/ 

        /* Move forward in the list*/
        prev = current;
        current = next;
    }

    /* Update the head to point to the new first node (formerly the last node) */
    *head = prev;

    return *head;
}
