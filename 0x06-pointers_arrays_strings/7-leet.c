#include "main.h"


/**
 * leet - acci like
 *@s: string
 *Return: *s to pointer
 */


char *leet(char *s)
{
int a = 0;
char b[] = "aeotlAEOTL";
char c[] = "4307143071";
int d;

while (s[a] != '\0')
{
for (d = 0; d < 9; ++d)
{

if (s[a] == b[d])
	{
	s[a] = c[d];
	}
}
++a;
}

return (s);
}

