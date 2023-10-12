#include "variadic_functions.h"

/**
 * print_all - print s i c f
 *@format: format specifer
 *Return: void
 */

void print_all(const char * const format, ...)
{
const char* F = format;
va_list para;
va_start(para,format);

	while (*F)
	{

	switch (*F)
	{
		case('c'):
		printf("%c", va_arg(para, int));
			break;
		case('i'):
		printf("%i", va_arg(para, int));
			break;
		case('f'):
		printf("%f", va_arg(para, double));
			break;
		case('s'):
		printf("%s", va_arg(para, char*));
			break;	
		default:
		break;
			}

	if(*format && (*F == 'i' || *F == 'c' || *F == 's' || *F == 'f'))
	{
		printf(", "); }

		++F;
	}
	printf("\n");

va_end(para);

}
