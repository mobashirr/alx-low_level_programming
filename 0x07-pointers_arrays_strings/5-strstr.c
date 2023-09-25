#include "main.h"

/**
  * coincidence - define if the string d id in c or not
  * @c: main string.
  * @d: string that will search for
  * Return: 1 or 0
  */
int coincidence(char *c, char *d)
{
	while (*d && *d == *c)
	{
		d++;
		c++;
	}

	if (*d == '\0')
		return (1);
	else
		return (0);
}

/**
*_strst - locates a substring.
*@needle: string to search
*@haystack: main string
*Return: new string
*/

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if ((*haystack == *needle && coincidence(haystack, needle) == 1) || !*needle)
		{
			return (haystack);
		}
		else
		{
			haystack++;
		}
	}
	return (0);
}
