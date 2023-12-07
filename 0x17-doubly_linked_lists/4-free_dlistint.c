#include "lists.h"


/**
 * free_dlistint - free double linked list
 * @head: head of linked list
*/
void free_dlistint(dlistint_t *head)
{
	while (head && head->next)
	{
		if (head->prev)
			free(head->prev);
		head = head->next;
	}
	if(head && !head->prev)
		free(head->prev);
	if (head)
		free(head);
}
