#include "variadic_functions.h"

/**
 *p_str - print string
 *@s: string
 *Return: int
 */
int p_str(char *s)
{
while (s != NULL)
{
	char *out = s;
	printf("%s", out);
	return (0);
}
printf("(nill)");
return (0);
}
/**
 * print_all - print s i c f
 *@format: format specifer
 *Return: void
 */

void print_all(const char * const format, ...)
{
const char *F = format;
va_list para;
va_start(para, format);

	while (*F)
	{

	switch (*F)
	{
		case('c'):
		printf("%c", va_arg(para, int));
			break;
		case('i'):
		printf("%d", va_arg(para, int));
			break;
		case('f'):
		printf("%f", va_arg(para, double));
			break;
		case('s'):
		p_str(va_arg(para, char*));
		default:
		break;	}

	if (*F && (*F == 'i' || *F == 'c' || *F == 's' || *F == 'f'))
	{
		if (*(F + 1))
		printf(", ");	}
			++F;
	}
	printf("\n");
	va_end(para);
}
