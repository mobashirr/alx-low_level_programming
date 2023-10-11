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

	if (size <= 0)
	return (-1);

		if (cmp != NULL)
		{
		while (co < size)
		{
		if (cmp(array[co]) !=)
		return (co);

		++co;
		}

		}

	return (-1);
}
