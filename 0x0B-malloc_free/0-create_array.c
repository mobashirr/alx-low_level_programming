#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array.
 *@size: size of the array.
 *@c: charecter that will be filled on all of the array.
 *Return: pointer.
 */

char *create_array(unsigned int size, char c)
{
unsigned int o;
char *A = (char *)malloc(size * sizeof(c));

if (size <= 0 || *A == NULL)
{
return (NULL);
}

for (o = 0; o < size; o++)
{

A[o] = c;

}


return (A);
}

