#include "lists.h"

/**
 * listint_len - find the number of nodes in linked list.
 * @h: pointer to the list
 * Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
size_t count = 0;

	while (h)
	{
	h = h->next;
	count++;
	}
	return (count);

}
