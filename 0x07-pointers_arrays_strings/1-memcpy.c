#include "main.h"

/**
 * _memcpy - copy elements from dest to src
 *@dest: string
 *@src: string
 *@n: num of elements wanted
 *Return: return char*
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
	dest[a] = src[a];
	++a;
	}

	return (dest);
}
