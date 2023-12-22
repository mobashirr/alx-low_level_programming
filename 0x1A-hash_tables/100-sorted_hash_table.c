#include "hash_tables.h"


/**
 * shash_table_create - create a new hash taple type shash_table_t
 * the hasp table is awsome its just like dictionareys in python
 * @size: is the size of the array (contain all keys and values)
 * Return: new hash taple if any wrong NULL
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	/*shash_table_t is a custom struct used to implement hash tapls*/
	shash_table_t *new = NULL;
	unsigned long int i;

	new = malloc(sizeof(shash_table_t));
	if (!new)
		return (NULL);

	new->array = malloc(sizeof(shash_node_t *) * size);
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
	new->shead = NULL;
	new->stail = NULL;

	return (new);
}

/**
 * shash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value.
 * @key: The key. Key can't be an empty string.
 * @value: The new value,
 * Return: 1 if added 0 otherwise.
 * In case of collision, add the new node at the beginning of the list.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *temp;
	int a = 0, b = 0;

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp)
	{	/* Check for already set keys (update the value): */
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (!temp->value)
				return (0);
			return (1);
		}
		temp = temp->next;
	}

	new_node = malloc(sizeof(shash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);

	temp = ht->shead;
	while (temp)
	{/*sort in order:*/

		if (ht->shead == NULL)
		{
			ht->shead = new_node;
			break;
		}
		a = *new_node->value;
		b = *temp->value;
		if (a < b)
		{
			new_node->sprev = temp->sprev;
			new_node->snext = temp;
			temp->sprev->snext = new_node;
			temp->sprev = new_node;
		}
		if (temp->snext)
			temp = temp->snext;
		else
		{
			ht->stail = temp;
			break;
		}

	}

	new_node->next = ht->array[index];	/*(handle collisions: */
	ht->array[index] = new_node;
	return (1);
}

/**
 * shash_table_get - get value of key in hash taple
 * @ht: hash table
 * @key: key we want to get its value
 * Return: the value of key
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	/*we need to get value of key:*/
	int ind = -1;
	char *array = NULL;

	if (!ht || !key)
		return (NULL);

	/*first get teh index using my key_index:*/

	ind = key_index((const unsigned char *)key, ht->size);


	if (ind != -1 && ht->array[ind] && ht->array[ind]->key)
	{
		/*now i have the index i can access the node of my key:*/
	if (ht->array[ind]->value != NULL)
	{
		array = (char *)ht->array[ind]->value;
		return (array);
	}
	else
	{

		return (NULL);
	}

	}
	else
		return (NULL);
}

/**
 * shash_table_print - Print a hash table.
 * @ht: The hash table to print.
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned int i;
	shash_node_t *node;
	int first = 1; /* Flag to handle comma placement */

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; ++i)
	{
		node = ht->array[i];

		while (node)
		{
			if (!first)
				printf(", ");

			printf("'%s': '%s'", node->key, node->value);
			first = 0;
			node = node->next;
		}
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - Print a hash table in reverse.
 * @ht: The hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
		unsigned int i;
	shash_node_t *node;
	int first = 1;

	if (ht == NULL)
		return;

	printf("{");

	for (i = ht->size - 1; i > 0; i--)
	{
		node = ht->array[i];

		while (node)
		{
			if (!first)
				printf(", ");

			printf("'%s': '%s'", node->key, node->value);
			first = 0;
			node = node->next;
		}
	}

	printf("}\n");
}

/**
 * shash_table_delete - delete shash table
 * @ht: hash table
*/
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *node, *temp;

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
