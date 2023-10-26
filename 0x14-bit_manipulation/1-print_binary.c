#include "main.h"

/**
 * print_buf - print the buffer in reversed order
 * @buf: buffer contain binary number
 * @n: the end of the number
*/
void print_buf(char *buf,int n)
{
	while (n >= 0)
	{
		_putchar(buf[n]);
		n--;
	}
}

/**
 * print_binary - print numbers in binary form
 * @n: number to be printed
*/
void print_binary(unsigned long int n)
{
	int i,rest;
	char *ptr;
	unsigned long num = n;

	ptr = malloc(sizeof(char) * n);
	if (!ptr)
	{
		exit(98);
	}

	for (i = 0; num != 0; i++)
	{
		rest = num % 2;
		rest == 0 ? (ptr[i] = '0') : (ptr[i] = '1');
		num /= 2;
	}
	i--;
	print_buf(ptr, i);
	free(ptr);
}
