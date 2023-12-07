#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 *@head: head
 *@index: index
 *Return: adress of wanted node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
		unsigned int i = 0;
		dlistint_t *wanted;

		if (!head)
			return (NULL);
			wanted = head;

		while (wanted)
		{
			if (i == index)
				return (wanted);
			if (wanted->next)
			{
				wanted = wanted->next;
				++i;
			}
			else
				break;

		}
		return (NULL);
}
