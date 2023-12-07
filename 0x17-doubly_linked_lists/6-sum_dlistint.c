#include "lists.h"

/**
 * sum_dlistint - sum the data of linked list
 * @head: head
 * Return: sum of all data
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;

		if (head->next)
			head = head->next;
		else
			break;
	}
	return (sum);
}
