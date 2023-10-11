#include "function_pointers.h"

/**
 *print_name - call pointer to function
 *@name: the name
 *@f: pointer to fun
 *Return: void
 */

void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
f(name);

}
