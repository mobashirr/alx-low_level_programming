#include "3-calc.h"

/**
 *get_op_func - chose the op
 *@s: sign of op
 *Return: pointer to func
 */
int (*get_op_func(char *s))(int, int)
{

op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

int i = 0;

while (i < 5)
{
if (ops[i].op[0] == *s)
{
return (ops[i].f);
}
++i;
}
return (NULL);
}
