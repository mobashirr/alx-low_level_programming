#include "lists.h"

/**
 * free_listint - free linked list elements
 * @head: pointer to the head of the list
*/

void free_listint(listint_t *head)
{
listint_t *next;    /*set pointer as temp*/

	while (head)
	{
		if (head->next)
		{                            /*the logic is:*/
			next = head->next;      /* 1- save address of next node if there*/
			free(head);             /* 2- free the current node */
			head = next;            /* 3- go to the next node*/
		}
		else
		{
			free(head);
			break; }
		}

}
