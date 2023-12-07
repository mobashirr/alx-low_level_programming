#include "lists.h"

/**
 * add_dnodeint - add node at first
 * @h: head
 * @n: element that will be added
 * Return: address of new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->prev = NULL;
	new->next = NULL;

	if (!(*head))
		return(new);

	(*head)->prev = new;
	new->next = (*head);
	(*head) = new;
	return (new);
}