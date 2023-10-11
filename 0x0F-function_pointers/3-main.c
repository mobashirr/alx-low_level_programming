#include "calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 */

int main(int argc, char *argv[])

{

int num1 ;
int num2 ;
int (*res) (int, int);
int final;

if (argc != 4)
{
printf("Error\n");
exit (98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

res = get_op_func(argv[2]);

if (res == NULL)
{
printf("Error\n");
exit (99);
}

if ((*argv[2] == '/' || *argv [3] == '%') && (num2 == 0))
{
printf("Error\n");
exit (100);
}

final = res(num1, num2);
printf("%d\n",final);

return (0);
}

