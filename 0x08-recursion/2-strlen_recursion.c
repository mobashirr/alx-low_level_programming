#include "main.h"

/**
 * _strlen_recursion - string length for str
 *@s: string
 *Return: length of string
 */

int _strlen_recursion(char *s)
{
int c = 0;
	if (*s == '\0')
		{return (c) ; }

	if (*s != '\0')
		{

		c = _strlen_recursion(s + 1);
		c = c + 1;
		return (c);
		}


return (c);

}
