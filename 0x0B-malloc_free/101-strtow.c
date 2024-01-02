#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * 
 * 
*/
char **strtow(char *str)
{
    char **res;
    char *split;
    int ac = 0,i, j = 0;

    if (!str)
        return (NULL);

    res = malloc(sizeof(char **) * 4);
    split = malloc(sizeof(char *));

    for (i = 0; str[i]; i++)
    {
        if (strcmp(str[i], (char)" ") == 0)
        {
            if (str[i - 1] != "")
            {
                if (ac + 1 % 4 == 0)
                    realloc(res, (ac + 1) * 2);
                strncpy(res[ac], str[i],j);
                ++ac;
                j = 0;
            }
        }
        ++j;
    }
    return (res);
}


/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */
void print_tab(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; ++i)
    {
        printf("%s\n", tab[i]);
    }
}

/**
 * main - check the code for ALX School students.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
    char **tab;

    tab = strtow("      ALX School         #cisfun      ");
    if (tab == NULL)
    {
        printf("Failed\n");
        return (1);
    }
    print_tab(tab);
    return (0);
}