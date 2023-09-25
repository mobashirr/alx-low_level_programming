#include "main.h"

/**
 * print_chessboard - print a chessboard.
 * @a: source matrix
 * Return: chessboard.
 */

void print_chessboard(char (*a)[8])
{
	int c, d;

	for (c = 0; c <= 7; c++)
	{
		for (d = 0; d <= 7; d++)
		{
			_putchar(a[c][d]);
		}
		_putchar('\n');
	}
}
