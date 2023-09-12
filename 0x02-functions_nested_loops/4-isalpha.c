#include "main.h"

/**
 * _isalpha - checks alphabets.
 * @c : is the char
 * Return: 1 if its a char only other wise its, 0 its not char
 *
 */


	int _isalpha(int c)
	{
		return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
	}
