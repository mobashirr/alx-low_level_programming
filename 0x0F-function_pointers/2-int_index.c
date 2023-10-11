#include "function_pointers.h"

/**
 *int_index - call pointer to function for each elment of the array
 *@array: the name of the array
 *@cmp: pointer to fun
 *@size: size of the array
 *Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int co = 0;
	int result = 0;

	if (size <= 0)
	return (0);

		if (cmp != NULL)
		{
		while (co < size)
		{
		result = cmp(array[co]);

		if (result == 1)
		return (co);

		++co;
		}

		}

	return (result);
}
