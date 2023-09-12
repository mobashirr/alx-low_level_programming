#include "main.h"

/**
 * _islower - check the condetion of the char.
 *
 * Return: 1 if the char is lower case other wise it 0.
 */

	int _islower()
	{
		if (c >= 'a' && c <= 'z')
			return (1);
		else
			return (0);
	}

