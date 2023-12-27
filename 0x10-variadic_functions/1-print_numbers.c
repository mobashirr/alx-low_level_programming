#include "variadic_functions.h"

/**
 * print_numbers - print numbers given as parameters
 *@separator: between numbers
 *@n: num of parameters
 *Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int num = 0, c;
	va_list para;
	va_start(para, n);

	for (c = 0; c < (int)n; ++c)
	{
		num  = va_arg(para, int);
		printf("%i", num);

		if (separator != NULL && (c + 1) != (int)n)
			printf("%s", separator);
	}

	printf("\n");
	va_end(para);
}
