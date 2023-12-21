#include "hash_tables.h"

/**
 * hash_table_get - get value of key in hash taple
 * @ht: hash table
 * @key: key we want to get its value
 * Return: the value of key
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	/*we need to get value of key:*/
	int ind;
	char *array = NULL;

	/*first get teh index using my key_index:*/
	ind = key_index((const unsigned char *)key, ht->size);

	if (ind != -1)
	{
		/*now i have the index i can access the node of my key:*/
		array = (char *)ht->array[ind]->value;
		return (array);
	}
	else
		return (NULL);
}
