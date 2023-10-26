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

/*the & opreator when using it with number and one (1)*/
/*one is like this when compare with int: */
/* 0000 0000 0000 0001*/
/*so alyaws take only the first number wich 1*/
	num = n & 1;		/*set the last digit*/

	_putchar(num + '0');

}
