#include "main.h"

/**
 * _realloc - this function reallocate memory for array of string.
 * @array: array of string (arr of ptr actully).
 * @size: the old size.
 * @new_size: the new size.
*/
void* _realloc(void* array, size_t* size, size_t new_size)
{
	void* new_array;
	size_t i;

	if (!array || !size)
        	return NULL;

	if (new_size <= *size)
        	return array;

	new_array = malloc(new_size);
	if (!new_array)
	return NULL;

	for (i = 0; i < *size; i++) 
	{
		((char*)new_array)[i] = ((char*)array)[i];
	}

	free(array);
	*size = new_size;

	return (new_array);
}


/**
 * free_command: free allocated memory for array of string.
 * @arr: array of string (ptr to ptr).
 * 
*/
void free_command(char **arr)
{
	int i;

	if (arr)
	{
		for (i = 0; arr[i]; i++)
		{
			free(arr[i]);
		}
        	free(arr);
	}
}
