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

	cur = *head;
	for (i = 0; (i + 1) != idx; i++)
	{	/*we want to reach the elment before  number idx*/
		if (cur->next)
		cur = cur->next;
		else
		break;
	}
	if ((i + 1) == idx)
	{
		next = cur->next;
		cur->next = node;
		node->next = next;
		return (node);
	}
	else if (idx == 0)
	{
	node->next = *head;
	*head = node;
	return (node); }
	return (NULL);
}
