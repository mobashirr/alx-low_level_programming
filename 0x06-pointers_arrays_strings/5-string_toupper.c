#include "main.h"

/**
 * *string_touupper - changes all lowercase letters of a string to uppercase.
 *@str: is string
 *Return: char *str to pointer
 */

char *string_toupper(char *str)
{
char i = 0;

while (i > = 'a' && i <= 'z')
{
	str[i] = str[i] - 32;
	++i;
}
return (str);
}
