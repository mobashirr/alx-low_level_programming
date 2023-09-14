#include <stdio.h>
#include "main.h"
/**
 * _isupper - check if char is upper case or not
 *@c; is char
 * Return: char(c)
 */

int _isupper(char c)

{

	if (c >= 'A' && c <= 'Z')

	{
		return (1);
	}

	else

	{
			return (0);
	}

}
