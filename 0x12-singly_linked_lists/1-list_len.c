#include "lists.h"

/**
 * list_len - function to calculate length of liked list list
 * @h: pointer from type size_t 
 * Return: number of nudes
*/
size_t list_len(const list_t *h)
{
int ptr = 0;

while (h)
{
	h = h->next;
	ptr++;
}

return ((size_t)ptr);
}
