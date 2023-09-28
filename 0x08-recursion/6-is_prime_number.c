#include "main.h"

/**
 * check_num - chack number are prime number or not.
 * @n: num to be check.
 * @l: checker num.
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
*/

int check_num(int n, int l)
{
  
	if (n % l == 0)
	{
		return (0);
	}
    
	      else if (l >= (n / 2))
	            {
	            	return (1);
	            }
	                  else
                    	{
	                  	return (check_num(n, l + 1));
	                    }
}


/**
 * is_prime_number -  returns 1 if prime number, otherwise return 0.
 * @n: number.
 * Return:  returns 1 if prime number, otherwise return 0
*/

int is_prime_number(int n)
{
  
	if (n <= 1)
	{
		return (0);
	}
  
	else
	{
		return (check_num(n, 2));
	}
}
