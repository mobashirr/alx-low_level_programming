#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - op program
 *@argc: c
 *@argv: a
 *Return: int
 */

int main(int argc, char *argv[])

{

int num1 ;
int num2 ;
int final;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);


if(((*argv[2] != '+') &&
(*argv[2] != '-') &&
(*argv[2] != '*') &&
(*argv[2] != '%') &&
(*argv[2] != '/')) ||
strlen(argv[2]) != 1)
{
printf("Error\n");
exit(99);
}

if((*argv[2] == '/' || *argv [3] == '%') && (num2 == 0))
{
printf("Error\n");
exit(100);
}


final = (get_op_func(argv[2])) (num1, num2);
printf("%d\n", final);

return (0);
}

