#include "search_algos.h"

/**
 * binary_search - binary search algorithm
 * @array: pointer to array of type int
 * @size: size of the array
 * @value: value to find in the array
 *
 * Return: index of the value in the array or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, j, k, med;

	if (array == NULL || size == 0)
		return (-1);

	i = 0;
	j = size - 1;

	while (i <= j)
	{
		med = (i + j) / 2;
		printf("Searching in array: ");
		for (k = i; k <= j; k++)
		{
			printf("%d", array[k]);
			if (k < j)
				printf(", ");
		}
		printf("\n");

		if (array[med] == value)
			return (med);
		else if (array[med] > value)
			j = med - 1;
		else
			i = med + 1;
	}

	return (-1);
}
