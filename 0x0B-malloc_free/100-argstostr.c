#include "main.h"
#include <stdio.h>

/**
 * argstostr - concatenate strings given
 * @ac: number of strings
 * @av: array of strings
 * Return: concatenated string or NULL if faild
*/
char *argstostr(int ac, char **av)
{
	int i;
	size_t len = 0;
	char *new = "";

	if (ac < 0 || !av)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (av[i])
		{
			len += strlen(av[i]);
		}
	}

	new = malloc(sizeof(char) * len + 1 + ac);

	for (i = 0; i < ac; i++)
	{
		if (av[i])
		{
			strncat(new, av[i], len);
			strcat(new, "\n");
		}
	}
	return (new);
}
