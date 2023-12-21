#include "hash_tables.h"

/**
 * hash_table_create - 
 * @size: is the size of 
 * Return: hash taple
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	
	hash_table_t *new = NULL;
	hash_node_t *arr = NULL;

	if (size <= 0)
		return (NULL);

	new = malloc(sizeof(hash_table_t));
	if (!new )
		return (NULL);

	arr = malloc(sizeof(hash_node_t) * size);
	if (!arr)
	{
		free(new);
		return (NULL);
	}

	new->size = size;
	new->array = &arr;

	return (new);
}
