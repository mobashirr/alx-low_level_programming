#include "main.h"

/**
 *_realloc - reallocate  memory
 *@ptr: pointer to allocated memory
 *@old_size: size of memory allocated
 *@new_size: size to be reallocated ptr for.
 *Return: void pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *reallo;

if (old_size == new_size)
{
	return (ptr);
}

if (new_size == 0 && ptr != NULL)
{
	free(ptr);
	return (NULL);
}

if (ptr == NULL && new_size != 0)
{
	reallo = malloc(new_size);

	if (reallo == NULL)
		return (NULL);

	return (reallo);
}


	reallo = malloc(new_size);

	if (reallo == NULL)
	{
		free(reallo);
		return (NULL);
	}



		memset(reallo, ptr, new_size);
		free(ptr);

		return (reallo);

}
