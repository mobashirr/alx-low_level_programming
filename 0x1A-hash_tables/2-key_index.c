#include "hash_tables.h"


/**
 * key_index - used to find the index for a key using
 * djb2 algorithm and module opreation
 * @key: string key
 * @size: size of the hash table
 * Return: the index of the key in hash table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int djb2, result;

	/*create a hash value:*/
	djb2 = hash_djb2(key);
	result = djb2 % size;

	/*handle out of range cases*/
	if (result > size)
		return (-1);

	/*return the remainder of hash value / size of hash table*/
	return (result);
}
