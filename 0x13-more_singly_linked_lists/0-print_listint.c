#include "lists.h"

/**
 * print_listint - print linked list content
 * @h: pointer to head of linked list
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t count = 0;

	if (!h)
	return (count);

	while (h)
	{
	printf("%d\n", h->n);
	if (h->next != NULL)
	h = h->next;
	count++;
	}
	return (count);
}
