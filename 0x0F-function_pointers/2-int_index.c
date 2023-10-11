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
	int co;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (co = 0; co < size; ++co)
	{
		if (cmp(array[co]) != 0)
			return (co);
	}

	return (-1);
}
