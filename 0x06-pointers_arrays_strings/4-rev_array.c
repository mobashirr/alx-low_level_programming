#include "main.h"

/**
 * reverse_array - revere array content
 * @a: fr array
 * @n: sc array
 * Return: void
 */

void reverse_array(int *a, int n)
{
int b = n - 1;
int c = 0;
int s;

while (b > c)
{
	s = a[c];
	a[c] = a[b];
	a[b] = s;
	--b;
	++c;
}
