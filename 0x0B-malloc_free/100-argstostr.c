#include "main.h"
#include <stdio.h>

/**
 * 
 * 
 * 
 * 
*/
char *argstostr(int ac, char **av)
{
    int i;
    size_t len = 0;
    char *new = "";

    if (ac < 0 || !*av)
        return (NULL);
    
    for (i = 0; i < ac; i++)
    {
        if (av[i])
        {
            len += strlen(av[i]);

        }
    }

    new = malloc(sizeof(char) * len + 1);

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

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
    char *s;

    s = argstostr(ac, av);
    if (s == NULL)
    {
        return (1);
    }
    printf("%s", s);
    free(s);
    return (0);
}

