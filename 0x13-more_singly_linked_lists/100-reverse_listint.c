#include "lists.h"

/**
 * reverse_listint - reverse linked list content
 * @head: linked list
 * Return: new head of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = *head;

	if (!*head)
	return (NULL);

	while (*head)
	{
		next = (*head)->next;	/*save next node*/
		(*head)->next = prev;	/*switch  last node to next node*/
		prev = *head;			/*save the current node*/
		*head = next;			/*move to next node*/

	}

	*head = prev;
	return (*head);
}
