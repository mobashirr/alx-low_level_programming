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
void **hand_void;
char *reallo;
int count = 0;

if (old_size == new_size)
{
	return (ptr);
}

if (new_size == 0 && ptr != NULL)
{
	free(ptr);
	return (NULL);
}

	reallo = malloc(new_size);

	if (reallo == NULL)
	{
		return (NULL);
	}

		hand_void = reallo;

		while (count < old_size)
		{
		char *hand1 = (char *)ptr;

		reallo[count] = hand1[count];
		++count;
		}


return (hand_void);

}
