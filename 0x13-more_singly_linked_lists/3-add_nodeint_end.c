#include "lists.h"

/**
 * add_nodeint_end - add new node at the end of list
 * @head: the first node of the list
 * @n: new element
 * Return: address of the new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *endof;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	return (NULL);

	node->n = n;
	node->next = NULL;	/*to insure next pointer is also null*/

	if (*head == NULL)	/*past coment for this case*/
	{
	*head = node;		/*cause head is pointer to pointer strct*/
	return (node); }

	endof = *head;
	while (endof->next)		/*we want to reach last of the list*/
	endof = endof->next;		/*be careful not to access null place*/
					/*if endof->next = null don't go there */
	endof->next = node;	/*put the new node at the last of the list*/
	return (node);
}
