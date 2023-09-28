#include "main.h"

/**
 * _puts_recursion - print a string
 *@s: the string
 *Return: char to pointer
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
	_putchar('\n');
}

if (*s != '\0')
{
_putchar(*s);

_puts_recursion(s + 1);
}

}
