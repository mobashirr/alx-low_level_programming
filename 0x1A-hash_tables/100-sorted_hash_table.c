#include "hash_tables.h"


/**
 * shash_table_create - create
 * @size:
 * Return: hash table
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
    {
        a = *new_node->value - 'a';
        b = *temp->value - 'a';
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
void shash_table_print_rev(const shash_table_t *ht)
{
    	unsigned int i;
	shash_node_t *node;
	int first = 1; /* Flag to handle comma placement */

	if (ht == NULL)
		return;

	printf("{");

	for (i = ht->size - 1; i >= 0; ++i)
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