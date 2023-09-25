#inclde "main.h"

/**
 * _memcpy - copy elements from dest to src
 *@dest: string
 *@src: string
 *@n: num of elements wanted
 *Return: return char*
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;
	int b;

	for (a = 0; dest[a] != '\0' && a < n; a++)
	{
	for (b = 0; src[b] != '\0'; b++)
	{
	dest[a] = src[b];
	}

	}

	return (dest);
}
