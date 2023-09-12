#include "main.h"

	/**
	 * print_alphabet - program that print all alphabet in lowercase
	 *
	 * Return: aways (0)
	 */


	void print_alphabet(void)
	{
		char letter;


		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);


		_putchar('\n');
	}
