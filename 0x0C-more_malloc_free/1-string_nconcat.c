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
unsigned int len2 = 0;
char *str2 = (char*)malloc(sizeof(char) * n + 1);

if (str2 == NULL)
{
	free(str2);
	return (NULL);
}

if (s1 == NULL)
	s1 = "";

if (s2 == NULL)
	s2 = "";


while (len2 < n && s2[len2] != '\0')
{
	str2[len2] = s2[len2];
	++len2;	}

	len = strlen(s1) + len2  + 1;
	con = malloc(len);

	if (con == NULL)
	{
	free(con);
	free(str2);
	return (NULL);
	}

strcpy(con, s1);
strcat(con, str2);

return (con);

}
