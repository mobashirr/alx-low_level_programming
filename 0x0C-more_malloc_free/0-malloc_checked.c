#include "main.h"

/**
 *malloc_checked - reserve memory
 *@b: number of bytes for allocated memory
 *Return: void pointer
 */

void *malloc_checked(unsigned int b)
{

void *mem = malloc(b);

if (mem == NULL)
{
	free(mem);
	exit(98);
}

return (mem);


}
