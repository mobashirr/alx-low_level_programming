#include "function_pointers.h"

/**
 *array - call pointer to function for each elment of the array
 *@array: the name of the array
 *@action: pointer to fun
 *@size: size of the array
 *Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t co = 0;

if (action != NULL)
{

	for(co = 0; size > co; ++co)
	{
		action(array[co]);
	}

}

}
