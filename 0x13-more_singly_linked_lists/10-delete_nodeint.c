#include "lists.h"
/**
 * delete_nodeint_at_index - delete node
 * @head: linked list
 * @index: number of node
 * Return: 1 in success or -1 if not
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *cur;

	if (!*head || !head)
	return (-1);

	if (index == 0)
	{
		cur = *head;
		*head = (*head)->next;
		free(cur);
		return (1);
	}

	cur = *head;
	for (i = 0; (i + 1) != index; i++)
	{
		if (!cur->next || !cur)
		return (-1);
		cur = cur->next;
	}

	if (cur->next->next)
	{
		temp = cur->next->next;
		free(cur->next);
		cur->next = temp;
		return (1);
	}

	return (-1);
}
