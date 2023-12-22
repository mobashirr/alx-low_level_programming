#include "hash_tables.h"


/**
 * hash_table_delete - delete hash table
 * @ht: hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *temp;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{	/*to free any linked list in the chain if there:*/
			free(node->key);
			free(node->value);
			temp = node->next;
			free(node);	/*free current node*/
			node = temp;	/*move to next node if there*/
		}
	}
	free(ht->array);	/*free the array*/
	free(ht);			/*free the hash table ptr*/
}
