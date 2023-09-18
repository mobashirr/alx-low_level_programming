#include "main.h"

/**
 * swap_int - swap values
 * @a: fr num
 * @b: sc num
 * Return: void
 */


void swap_int(int *a, int *b)
{
	int s1;
	int s2;

	s1 = *a;
	s2 = *b;

	*a = s2;
	*b = s1;
}
