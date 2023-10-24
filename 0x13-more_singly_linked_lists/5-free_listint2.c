#include "lists.h"

/**
 * free_listint2 - free linked list elements and set
 * head to NULL value.
 * @head: pointer to the head of the list
*/
void free_listint2(listint_t **head)
{
listint_t *next, *cur;    /*set pointer as temp*/

	if (!*head)
		exit(98);

	while (*head)             /*we can derefrense between ptr to ptr to struct*/
	{
		if ((*head)->next)      /*head is ptr to ptr to struct */
		{
			next = (*head)->next;    /*this way derefrense work*/
			cur = *head;			/*save the curent address to free it*/
			*head = next;           /*go to the next node*/
			free(cur);             /* free the current node */
		}
		else
		{
			free(*head);
			break; }
	}
		*head = NULL;
		cur = NULL;
		next = NULL;
}
