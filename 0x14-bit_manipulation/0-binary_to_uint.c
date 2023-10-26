#include "main.h"

/**
 * binary_to_uint - convert binary to int base 10
 * @b: binary number
 * Return: unsigned int (converted num)
*/
unsigned int binary_to_uint(const char *b)
{
int i, sum = 0, han, base = 1;

	for (i = 0; b[i] != '\0'; i++)		/*calculate length of number*/
	{
		if (b[i] != '0' && b[i] != '1')		/*check if invaild number*/
		return (0);
	}
 	i--;	/*set at the end of the number*/

	while (b[i] != '\0')
	{
		b[i] == '1' ? (han = 1) : (han = 0);	/*the logic:*/
		sum += (han * (base));			/*1-each time add the converted number*/
		base *= 2;				/*we convert the number by multiply by its value*/
		i--;
	}
 	return(sum);
}

