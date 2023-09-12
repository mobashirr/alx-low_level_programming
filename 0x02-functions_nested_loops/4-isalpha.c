#include "main.h"

/**
 * _isalpha - checks alphabets.
 *
 * @c : is the char
 * REturn; 1 if its a char only 
 */


	int _isalpha(int c)
	{
		return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
	}

