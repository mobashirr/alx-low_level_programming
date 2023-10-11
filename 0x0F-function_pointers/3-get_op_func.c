#include "calc.h"

/**
 *
 *
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[]={
	{"+",op_add},
	{"-",op_sub},
	{"*",op_mul},
	{"/",op_div},
	{"%",op_mod},
	{NULL,NULL}
};
int i = 0;

while (i < (sizeof(ops) / sizeof(ops[0])) && s = NULL)
	{
		if (*s == ops[i].op)
		{
			i = ops[i].f(a,b);
			return (i);
		}	
	}
		return (NULL);
}
