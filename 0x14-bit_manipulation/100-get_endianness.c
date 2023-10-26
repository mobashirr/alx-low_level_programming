#include "main.h"

/**
 * get_endianness - checks the endianness.
 * Return: int
*/
int get_endianness(void)
{
	int num = 0x01;
	char *str;

	str = (char *)&num;

	if(*str == 0x01)
	return (1);

	return (0);
}
