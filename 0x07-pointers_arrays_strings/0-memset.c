#include "main.h"

/**
 *  * _memset - function fill with b
 *   *@s: array
 *    *@b: will be filled with
 *     *@n: the num of elment to fill
 *      *Return: char*
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
	++i;
	}

	return (s);
}
