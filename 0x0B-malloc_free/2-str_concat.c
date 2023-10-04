#include "main.h"

/**
 * str_concat - concatenate
 *@s1: string
 *@s2: string 2
 *Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
int len = strlen(s1) + strlen(s2);
char *A = (char *)malloc(len);
char *c = "";

if (A == NULL)
{
return (NULL);
}
if (s1 != NULL)
{
strcat(A, s1);
}

if (s1 == NULL)
{
strcat(A, c);
}

if (s2 != NULL)
{
strcat(A, s2);
}

if (s2 == NULL)
{
strcat(A, c);
}

return (A);
}
