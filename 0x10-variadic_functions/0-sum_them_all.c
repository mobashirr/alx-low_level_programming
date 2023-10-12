#include "variadic_functions.h"

/**
 *sum_them_all - find some of multy para
 *@n: num of para
 *Return: sum of all para
 */

int sum_them_all(const unsigned int n, ...)
{
int result = 0;
int s = 0;

va_list para;
va_start(para, n);

	if ((int)n == 0)
	return (0);

	while(n > (unsigned int)s )
	{
	result = result + va_arg(para, int);
		++s;
	}



			return (result);
}
