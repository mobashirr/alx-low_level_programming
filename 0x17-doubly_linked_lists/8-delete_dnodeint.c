#include "lists.h"

/**
 * delete_dnodeint_at_index - del node at given index
 * @head: head
 * @index: index
 * Return: 1 if success else -1
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = NULL, *temp2 = NULL;

	if ((*head) && index == 0)
	{
		temp = (*head)->next;
		free(*head);
		(*head) = temp;
		return (1);
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
		if(temp->next)
		{
	   		temp = temp->next;
		++i;
		}
		else
		break;
	}
	return (-1);
}
