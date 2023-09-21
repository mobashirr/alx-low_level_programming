#include "main.h"


/**
 * leet - acci like
 *@s: string
 *Return: *s to pointer
 */


char *leet(char *s)
{
int a = 0;


while (s[a] != '\0')
{

if (s[a] == 'a' || s[a] == 'A')
{
s[a] = '4';
}

else if (s[a] == 'e' || s[a] == 'E')
{
s[a] = '3';
}

else if (s[a] == 'o' || s[a] == 'O')
{
s[a] = '0';
}

else if (s[a] == 't' || s[a] == 'T')
{
s[a] = '7';
}

else if (s[a] == 'l' || s[a] == 'L')
{
s[a] = '1';
}

++a;
}

return (s);
}

