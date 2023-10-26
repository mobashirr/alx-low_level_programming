#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n:number
 * @index: the index
 * Return: value of a bit at a given index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int indexed;
	int val;

	if (index > sizeof(unsigned long int) * 8)	/*index is set for binary nubers*/
		return (-1);				/*and unsigen long is 8 bayte but bayte = 8bite*/

	indexed = n >> index;		/*this way the number wanted will be at lift*/
	val = indexed & 1;		/*to save the number at the left (0 or 1)*/
	return (val);
}
