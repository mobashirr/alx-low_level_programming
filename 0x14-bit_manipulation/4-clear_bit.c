#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number
 * @index: index
 * Return: Returns 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8) /*index is set for binary nubers*/
		return (-1);						   /*and unsigen long is 8 bayte but bayte = 8bite*/

/*we use & because it doesn't change 0 to 1 and 1 still be 1 this case*/
/*the only change will be at index that will always be 0*/
	*n = *n & ~(1 << index); /*this way only index will be changed*/
	return (1);

}
