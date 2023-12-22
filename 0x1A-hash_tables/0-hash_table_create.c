#include "hash_tables.h"

/**
 * hash_table_create - create a new hash taple
 * the hasp table is awsome its just like dictionareys in python
 * @size: is the size of the array (contain all keys and values)
 * Return: new hash taple if any wrong NULL
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	/*hash_table_t is a custom struct used to implement hash tapls*/
	hash_table_t *new = NULL;
	unsigned long int i;

	new = malloc(sizeof(hash_table_t));
	if (!new)
		return (NULL);

	new->array = malloc(sizeof(hash_node_t *) * size);
	if (!new->array)
	{
		free(new);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		new->array[i] = NULL;
	}
	/*the hash table size of array contain all of my nodes and the arr of nodes*/
	new->size = size;

	return (new);
}
