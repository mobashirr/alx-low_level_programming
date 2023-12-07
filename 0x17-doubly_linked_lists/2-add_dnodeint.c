#include "lists.h"

/**
 * add_dnodeint - add node at first
 * @head: head
 * @n: element that will be added
 * Return: address of new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

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

	(*head)->prev = new;
	new->next = (*head);
	(*head) = new;
	return (new);
}
