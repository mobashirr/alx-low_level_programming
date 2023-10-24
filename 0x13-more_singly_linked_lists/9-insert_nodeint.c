#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: linked list
 * @idx: index of the list where the new node should be added
 * @n: the number that should be added
 * Return: the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node, *next, *cur;

	if (!*head || !head)
	return (NULL);

	node = malloc(sizeof(listint_t));
	if (!node)
	return (NULL);
	node->n = n;
	next = NULL;
	cur = *head;
	for (i = 0; cur && (i + 1) != idx; i++)
	{	/*we want to reach the elment before  number idx*/
		if (cur->next)
		cur = cur->next;
		else
		break;
	}

	if ((i + 1) == idx)
	{
		next = cur->next;	/*save the next node*/
		cur->next = node;	/*put the new node at the position*/
		node->next = next;	/*link the node*/
		if (node->next)
		return (node);
		else
		return (NULL);
	}
	else if (idx == 0)
	{
	node->next = *head;
	*head = node;
	return (node); }

	return (NULL);
}
