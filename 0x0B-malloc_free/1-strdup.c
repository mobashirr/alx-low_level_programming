#include "main.h"

/**
 * length - find length of string
 *@string: id string
 *Return: int (length).
 */

int length(char *string)
{

int len = 0;

while (string[len] != '\0')
{
	++len;
}


return (len + 1);
}

/**
 * _strdup - allocate memory for given string
 *@str: is the string
 *
 *Return: pointer to allocated memory.
 */

char *_strdup(char *str)
{
int a = length(str);
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

