#include "main.h"

/**
 *string_nconcat - reserve memory
 *@n: number of bytes for to concatenate from s2
 *@s1: string1.
 *@s2: string2.
 *Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *con;
int len;
int len2 = 0;
char str2[n];

if (s1 == NULL)
	s1 = "";

if (s2 == NULL)
	s2 = "";

while (len2 != n)
{
	str2[len2] = s2[len2];
	++len2;	}

	len = strlen(s1) + len2  + 1;
	con = malloc(len);

	if (con == NULL)
	return (NULL);

strcpy(con, s1);
strcat(con, str2);

return (con);

}
