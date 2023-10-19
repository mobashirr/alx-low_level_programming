#include "lists.h"

/**
 * free_list - free linked list 
 * @head: pointer to the linked list
 */
void free_list(list_t *head)
{

while (head)
{
    free(head);
	head = head->next;

}
free(head);

}