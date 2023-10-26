#include "main.h"
/**
 * print_binary - print numbers in binary form
 * @n: number to be printed
*/
void print_binary(unsigned long int n)
{
	int num;

	if (n > 1)
	print_binary(n >> 1);

	num = n & 1;		/*set the last digit*/
	_putchar(num + '0');

}
