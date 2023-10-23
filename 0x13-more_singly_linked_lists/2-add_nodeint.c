#include "lists.h"

/**
 * add_nodeint - add new node at first.
 * @head:pointer to the head of linked list
 * @n: new member (n) to be added
 * Return: address of the new member
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	return (NULL);

	node->n = n;
	node->next = NULL;	/*to insure next pointer is also null*/

	if (*head == NULL)	/*past coment for this case*/
	{
	*head = node;		/*cause head is pointer to pointer strct*/
	return (node); }

	node->next = *head;
	*head = node;
	return (node);
}
