#include "main.h"
/**
 * flip_bits - you have 2 nums
 * how  bits you would need to flip to get from one number to another.
 * simply mean make them the same number
 * @n: first num
 * @m: second num
 * Return: the number of bit
 * you would need to flip to get from one number to another.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num, flib = 0;

	num = n ^ m;         /*xsor opreator*/

	while (num != 0)
	{
		if ((num & 1) == 1)		/*check the last digit*/
		flib++;
		num = num >> 1;			/*same like num /= 2*/
	}
	return (flib);
}
