#include <stdio.h>
/**
 * main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{

	int h = 97;


	while (h >= 122)
	{
	
		if (h == 101 || h == 113)
		{
			h++;
			continue;
		}
		putchar(h);
		h++;
	}
		putchar('\n');

return (0);


}
