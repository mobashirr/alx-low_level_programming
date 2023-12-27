#include "variadic_functions.h"

/**
 * print_strings - print strings
 *@separator: between strings
 *@n: num of para
 *Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str, *hand;
	int c;
	va_list para;
	va_start(para, n);

	for (c = 0; c < (int)n; ++c)
	{
		hand = va_arg(para, char *);
		str  = (char *)hand != NULL ? hand : "(nil)";
		printf("%s", str);

		if (separator != NULL && (c + 1) != (int)n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(para);
}
