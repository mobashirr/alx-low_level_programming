#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: number
 * @index: index
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)	/*index is set for binary nubers*/
		return (-1);				/*and unsigen long is 8 bayte but bayte = 8bite*/

    *n = *n | 1 << index;       /*this way only index will be changed*/
    return(1);
}
