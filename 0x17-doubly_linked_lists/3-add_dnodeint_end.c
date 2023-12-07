#include "lists.h"

/**
 * add_dnodeint_end - add node at end
 * @head: head
 * @n: element that will be added
 * Return: address of new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (!(*head))
	{
		(*head) = new;
		return (new);
	}

	while (1)
	{
		if ((*head)->next)
			(*head) = (*head)->next;
		else
			break;
	}
	(*head)->next = new;
	new->prev = (*head);
	return (new);
}
