#include "main.h"

/**
 *string_nconcat - reserve memory for two str and concatenate them.
 *@n: number of bytes for to concatenate from s2
 *@s1: string1.
 *@s2: string2.
 *Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *con;
int len;
unsigned int len1;
unsigned int len2;

if (s1 == NULL)
	s1 = "";

if (s2 == NULL)
	s2 = "";

len1 = strlen(s1);
len2 = strlen(s2);

if (len2 <= n)
n = len2;

	len = len1 + n + 1;
	con = malloc(len);

	if (con == NULL)
	{
	free(con);
	return (NULL);
	}
con[len + 1] = '\0';

strcpy(con, s1);
strncat(con, s2, n);

return (con);

}
