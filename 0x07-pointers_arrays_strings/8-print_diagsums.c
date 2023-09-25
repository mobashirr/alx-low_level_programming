#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print additions of the two diagonals.
 * @a: main matrix
 * @size: size of matrix
 *
 * Return: chessboard.
 */

void print_diagsums(int *a, int size)
{
int i;
int j, sumdiag1 = 0, sumdiag2 = 0, step1, step2;

	for (i = 0; i <= (size - 1); i++)
	{
		step1 =  (size + 1) * i;
		sumdiag1 = sumdiag1 + *(a + step1);
	}
for (j = 1; j <= size; j++)
	{
		step2 = (size - 1) * j;
		sumdiag2 = sumdiag2 + *(a + step2);
	}
	printf("%d, %d\n", sumdiag1, sumdiag2);
}
