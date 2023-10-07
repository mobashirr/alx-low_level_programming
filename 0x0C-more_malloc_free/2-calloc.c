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
void *hand_void;

if (size == 0 || nmemb == 0)
{
	return (NULL); }


	arr = malloc(nmemb * size);

	if (arr == NULL)
	{
	return (NULL);
	}
		while (nmemb > zer)
		{
			arr[zer] = 0;
			++zer;
		}

		hand_void = (char*)arr;

return (hand_void);

}
