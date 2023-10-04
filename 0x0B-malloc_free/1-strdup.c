#include "main.h"

/**
 * _strdup - allocate memory for given string
 *@str: is the string
 *
 *Return: pointer to allocated memory.
 */

char *_strdup(char *str)
{
int a = 0;

while (str[a] != '\0')
{
	++a;
}


char *A = (char *)malloc(sizeof(char) * a);

if (a <= 0 || A == NULL)
{

return (NULL);
}



a = 0;

while (A[a] != '\0' && str[a] != '\0')
{
A[a] = str[a];
++a;
}

return (A);
}

