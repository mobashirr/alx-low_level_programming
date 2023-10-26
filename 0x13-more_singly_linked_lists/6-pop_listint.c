#include "lists.h"

/**
 * pop_listint - this funcion takes linked list
 * and free the node pointed on the head of the list
 *@head: ptr to ptr to first node of the list
 * Return: the number (data) in the first node
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!*head || !head)
		return (0);

	if ((*head)->next)
	{
		temp = (*head)->next;
		num = (*head)->n;
		free(*head);
		*head = temp;
	}
	else
	{
	num = (*head)->n;
	free(*head);	}

	return (num);
}
