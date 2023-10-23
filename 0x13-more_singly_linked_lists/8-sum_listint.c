#include "lists.h"

/**
 * sum_listint - this function calculate the sum of int elements
 * from linked list
 * @head: linked list
 * Return: sum of elements
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += (int)head->n;		/*the cast recuired cause*/
		if (head->next)				/*can't compare between int and struct * */
		head = head->next;
		else
		break;
	}

	return (sum);
}
