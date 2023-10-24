#include "lists.h"

/**
 * print_listint_safe
 * @head: linked list
 * Return: number of nodes
 * 
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	int *ptr;

	if (!head)
	exit(98);

	while(head)
	{
		ptr = head->n;
		printf("[%p] %d", (void *)ptr,head->n);
		i++;
		if (head->next != NULL)
		head = head->next;
		else
		break;
	}

return(i);
}