#include "lists.h"

/**
 * 
 * 
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = NULL, *temp2 = NULL;

	if ((*head) && index == 0)
	{
		if ((*head)->next)
			temp = (*head)->next;
		free(*head);
		if(temp)
			(*head) = temp;
		return(1);
	}


	if ((*head))
		temp = (*head);

	while (temp)
	{
        if (i == index)
        {
			temp2 = temp->next;
			temp = temp->prev;
			free(temp->next);
			temp->next = temp2;
			temp2 = temp;
			temp = temp->next;
			temp->prev = temp2;
            return (1);
        }
       temp = temp->next;
        ++i;
	}
	return(-1);
}
