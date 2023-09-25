#include "main.h"

/**
 * _strspn - 
 *@s: string
 *@accept: acception
 *Return: unsigned in
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




