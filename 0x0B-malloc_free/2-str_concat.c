#include "main.h"

/**
 * str_concat - concatenate
 *@s1: string
 *@s2: string 2
 *Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
int len;
char *A;

if (s1 == NULL)
{
	s1 = "";
}

if (s2 == NULL)
{
	s2 = "";
}


len = strlen(s1) + strlen(s2) + 1;
char *A = (char *)malloc(len);

if (A == NULL)
	return (NULL);


strcpy(A, s1);
strcat(A, s2);

return (A);
}
