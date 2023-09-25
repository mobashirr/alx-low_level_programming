#include "main.h"

/**
 * _memset - function fill with b
 *@s: array 
 *@b: will be filled with
 *@n: the num of elment to fill
 *Return: char*
 */

char *_memset(char *s, char b, unsigned int n)
{
int i;

for (i = 0; i < n; ++i)
{
s[i] = b;

}

return (s);
}

