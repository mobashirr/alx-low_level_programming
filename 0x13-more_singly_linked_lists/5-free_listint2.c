#include "lists.h"

/**
 * free_listint2 - free linked list elements and set
 * head to NULL value.
 * @head: pointer to the head of the list
*/
void free_listint2(listint_t **head)
{

listint_t *next;    /*set pointer as temp*/

	while (*head)             /*we can derefrense between ptr to ptr to struct*/
	{
		if ((*head)->next)      /*the head is ptr to ptr to struct */
		{
			next = (*head)->next;     /*this way derefrense work*/
			free(*head);             /* 2- free the current node */
			*head = next;            /* 3- go to the next node*/
		}
		else
		{
			free(*head);
			break; }
	}
		*head = NULL;
}
