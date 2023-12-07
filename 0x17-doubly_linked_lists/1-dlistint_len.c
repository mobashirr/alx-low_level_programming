#include "lists.h"

/**
 * dlistint_len - length of linked list
 * @h: head
 * Return: the length
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	if (!h)
		return (len);
	while (h)
	{
		++len;
		if (h->next)
			h = h->next;
		else
			break;
	}
	return (len);
}
