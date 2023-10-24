#include "lists.h"

/**
 * get_nodeint_at_index - this funtion give you
 * choise which node you want
 * @head: linked list.
 * @index: the number of node
 * Return: the number (data) in the chosen node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

		if (!head)
		return(NULL);

	for (i = 0; i != index && head; i++)
	{
	head = (head)->next;
	}

	if (!head)
	return(NULL);

	node = head;
	return (node);
}
