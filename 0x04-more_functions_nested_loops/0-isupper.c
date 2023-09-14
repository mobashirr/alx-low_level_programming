#include <stdio.h>
#include "main.h"
/**
 * _isupper - check if char is upper case or not
 *@c: is char
 * Return: char(c)
 */

int _isupper(char c)

{
/*for this algorithm you need to return 1 only when char (c) is uppercase */

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
