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
	int ind = -1;
	char *array = NULL;
	char * wrong = "(null)";

	if (!ht || !key)
		return (wrong);

	/*first get teh index using my key_index:*/
	printf("try to get idx:\n");
	ind = key_index((const unsigned char *)key, ht->size);
	printf("%d\n", ind);
	printf("if stat::\n");
	if (ind != -1 && ht->array[ind] && ht->array[ind]->key)
	{
		/*now i have the index i can access the node of my key:*/
	if (ht->array[ind]->value != NULL)
	{
    	printf("inside strcmp: Key found!\n");
    	array = (char *)ht->array[ind]->value;
    	return (array);
	}
	else
	{
    	printf("Key not found or value is NULL.\n");
    	return NULL;
	}

	}
	else
		return (wrong);
}
