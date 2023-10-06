#include "main.h"

/**
 *array_range - reserve memory for an array of intgers from min to mix
 *@min: min number
 *@max: max number
 *Return: void pointer
 */

int *array_range(int min, int max)
{
int *arr;
int range = (max - min) + 1;
int count = 0;

if (min > max)
return (NULL);


	arr = malloc(range * sizeof(int));

	if (arr == NULL)
	{
	free(arr);
	return (NULL);
	}

		while (min <= max)
		{
			arr[count] = min;
			++count;
			++min;
		}

return (arr);

}
