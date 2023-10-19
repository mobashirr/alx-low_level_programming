#include "lists.h"

/**
 * _strlen - to get length of string
 * @str: string to process
 * Return: length of str
 */

int _strlen(const char *str)
{
	const char *s;

	for (s = str; *s; ++s)
		;
	return (s - str);
}