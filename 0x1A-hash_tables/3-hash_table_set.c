#include "hash_tables.h"

/**
 * hash_table_set
 * @ht: hash table
 * @key: the key we want to add or update
 * @value: new value 
 * Return: 1 if successeed else 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL;
	unsigned int ind, size_hash;

	if (!key || !value || !ht)
		return (0);
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	size_hash = ht->size;	/*size of hash table*/
	ind = key_index((const unsigned char *)key, size_hash); /*get the index for key*/

		new->next = ht->array[ind];
		ht->array[ind] = new;

	return (1);
}
