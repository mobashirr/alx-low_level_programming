#include "main.h"

/**
 * _strncaat - conctenate to strings
 * @dest: string
 * @src: string
 *Return: char *str
 */

char *_strncat(char *dest, char *src, int n)
{
int a = 0;
int b =0;

while (dest[a] != '\0')
{
	++a;
}


while(src[b] != '\0' && b < n)

{
	dest[a] = src[b];
	++b;
	++a;
}

return (dest);

}
