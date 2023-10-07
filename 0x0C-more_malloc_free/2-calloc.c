#include "main.h"

/**
 *_calloc - reserve memory for an array
 *@nmemb: number of elments
 *@size: size of each elment
 *Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *arr;

if (size == 0 || nmemb == 0)
{
	return (NULL); }


	arr = malloc(nmemb * size);

	if (arr == NULL)
	{
	return (NULL);
	}

	memset(arr, 0, nmemb * size);

return (arr);
}
