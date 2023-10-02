#include "main.h"

/**
 *  * _strspn - Write a function that gets the length of a prefix substring.
 *   *@s: string
 *    *@accept: acception
 *     *Return: unsigned iny
 */

unsigned int _strspn(char *s, char *accept)
{
		unsigned int a;
		unsigned int b;


		for (a = 0; s[a] != '\0'; a++)
		{
			b = 0;

			for (; accept[b] != s[a]; b++)
			{
				if (accept[b] == '\0')
					return (a);
			}

				}

			return (a);
}
