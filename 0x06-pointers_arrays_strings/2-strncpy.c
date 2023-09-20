#include "main.h"

/**
 * _strncpy - function to copy string
 *@dest: string
 *@src: string
 *@n: is byte size
 *Return: char * to pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
int a = 0;
	
while (dest[a] != '\0')
{
	if (a < n)
	{
	dest[a] = src[a];
		++a;
	}
}
	while ( a < n)
		{
		src[a] = '\0';
			++a;
		}
return (dest);
}
