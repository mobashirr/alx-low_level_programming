#include "main.h"
/**
 * cap_string - capitalizes most of the words in a string.
 * @s: analized string.
 * Return: String with all words capitalized.
 */
char *cap_string(char *s)
{
	int a, g;
	int m[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};


a = 0;
while (*(s + a) != '\0')
{
	if (*(s + a) >= 'a' && *(s + a) <= 'z')
	{
		if (a == 0)
		{
				*(s + a) = *(s + a) - 32;
		}
			
			else
			{
				for (g = 0; g <= 12; g++)
				{
					if (m[g] == *(s + a - 1))
					{
						*(s + a) = *(s + a) - 32;
					}
				}
			}
		}
	a++;
	}
	return (s);
}

