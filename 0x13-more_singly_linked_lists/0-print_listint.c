#include "lists.h"

/**
 * print_listint - print linked list content
 * @h: pointer to head of linked list
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
int count = 0;

	if (h == NULL)
	return ((size_t)count);

	while (h)
	{
	printf("%d\n", h->n);
	count++;
	if (h->next)
		h = h->next;
	else
		break;

	}
	return ((size_t)count);
}
