#include "search_algos.h"

/**
 * linear_search - linear search algorithm
 * @array: pointer to array of type int
 * @size: size of the array
 * @value: we want to find in the array
 * Return: int
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (array && size > 0)
    {
        for (i = 0; i < size; i++)
        {
            printf("Value checked array[%ld] = [%d]\n", i, array[i]);
            if (array[i] == value)
            {
                return (i);
            }
        }
    }

    return (-1);
}
