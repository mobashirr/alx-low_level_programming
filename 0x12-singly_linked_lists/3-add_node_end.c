#include "lists.h"

/**
 * add_node_end - function to add node to linked list at the end
 * @head: pointer from type size_t 
 * @str: string to add.
 * Return: pointer to node cteated
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *node;

	node = malloc(sizeof(list_t));
	if (!node)
	{
		return (NULL);
	}
	node->str = strdup(str);
	if (!node->str)
	{
		free(node);
		return (NULL);
	}
	node->len = strlen(str);

	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
	} 
	else
	{
		list_t *current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = node;
	}
			return (node);
}