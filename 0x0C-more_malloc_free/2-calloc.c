#include "main.h"

/**
 *_calloc - reserve memory for an array
 *@nmemb: number of elments
 *@size: size of each elment
 *Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *arr;
unsigned int zer = 0;


if (size == 0 || nmemb == 0)
{
	return (NULL); }


	arr = malloc(nmemb * size);

	if (arr == NULL)
	{
	free(arr);
	return (NULL);
	}

		while (nmemb > zer)
		{
			arr[zer] = 0;
			++zer;
		}

return (arr);

}
