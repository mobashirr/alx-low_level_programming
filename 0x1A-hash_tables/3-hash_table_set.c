#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to update or add to.
 * @key: The key. Must not be an empty string.
 * @value: The value associated with the key.
 *
 * Return: 1 on success, 0 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new_node = NULL;
    unsigned int ind, size_hash;

    if (!ht || !key || !value)
        return (0);

    new_node = malloc(sizeof(hash_node_t));
    if (!new_node)
        return (0);

    new_node->key = strdup(key);
    if (!new_node->key)
    {
        free(new_node);
        return (0);
    }

    new_node->value = strdup(value);
    if (!new_node->value)
    {
        free(new_node->key);
        free(new_node);
        return (0);
    }

    size_hash = ht->size;
    ind = key_index((const unsigned char *)key, size_hash);
/*
    temp = ht->array[ind];

    while (temp)
    {
        if (strcmp(new_node->key, temp->key) == 0)
        {
            free(new_node->key);
            free(new_node->value);
            free(new_node);

            free(temp->value);
            temp->value = strdup(value);
            if (!temp->value)
                return (0);

            return (1);
        }

        temp = temp->next;
    }
*/
    new_node->next = ht->array[ind];
    ht->array[ind] = new_node;

    return (1);
}
