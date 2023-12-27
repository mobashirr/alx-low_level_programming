#include "variadic_functions.h"

/**
 *sum_them_all - find some of multy parameter
 *@n: num of parameter
 *Return: sum of all parameter
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int result = 0;
	unsigned int s = 0;

	va_list para;
	va_start(para, n);

	if ((int)n == 0)
	return (0);

	while (n > (unsigned int)s)
	{
		result = result + va_arg(para, int);
		++s;
	}
		return (result);
}
