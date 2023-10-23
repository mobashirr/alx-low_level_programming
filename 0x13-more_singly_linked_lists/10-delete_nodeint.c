#include "lists.h"
/**
 * delete_nodeint_at_index -
 * @head:
 * @index:
 * Return: 
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    unsigned int i;
    listint_t *temp, *cur;

    if (!*head)
    return (-1);

    if ((int)index == 0)
    {
        if ((*head)->next)
        {
            temp = (*head)->next;
            free(*head);
            *head = temp;
            return (1);
        }
        else
        {
        return(1);
        }
    }

    cur = *head;
    for (i = 0; (i + 1) != index; i++)
    {
        if (cur->next)
        cur = cur->next;
        else
        break;
    }

    if (cur->next->next)
    {
        temp = cur->next->next;
        free(cur->next);
        cur->next = temp;
    }
    else if (!cur->next->next)
    {
        free(cur->next);
    }


    return (1);
}
