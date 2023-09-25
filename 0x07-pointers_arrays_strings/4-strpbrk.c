#include "main.h"

/**
* _strpbrk - searches a string for any of a set of bytes.
*@s: string
*@accept: num of bytes
*Return: char*
*/

char *_strpbrk(char *s, char *accept)
{
unsigned int a, b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
			{
				break;
			}
		}
		if (accept[b] != '\0')
		{
			return (s + a);
		}
	}
	return (0);
}
