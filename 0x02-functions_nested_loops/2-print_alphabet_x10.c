#include "main.h"
/**
 * print_alphabet - prints alphabet, in lowercase,
 * followed by a new line
 */

	void print_alphabet(void)
{
		char c;
		int r;

	for (r = 0, r <= 9; r++)
	
	{for (c = 'a'; c <= 'z'; c++)
		_putchar(c);

		_putchar('\n');
	}
}
