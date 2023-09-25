#include "main.h"

/**
 * _strchar - locate char inside string
 *@s: string
 *@c: the char
 *Return: char*
 */


char *_strchr(char *s, char c)
{
int a;

for (a = 0; s[a] >= '\0'; a++)
{
if (s[a] == c)
{
return (&s[a]);
}
}
return (s);

}

