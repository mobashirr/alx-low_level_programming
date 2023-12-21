#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    unsigned int i;
    ht = hash_table_create(1024);
    hash_table_set(ht, "hetairas", "cool");

    printf("%s\n", hash_table_get(ht, "hetairas"));


    ht = hash_table_create(1024);
    hash_table_set(ht, "mentioner", "cool2");

    printf("%s\n", hash_table_get(ht, "mentioner"));

    i = key_index((const unsigned char *)"mentioner", 1024);

    printf("%s\n", (char *)ht->array[i]->next->value);

    return (EXIT_SUCCESS);
}
