#include "main.h"


/**
 * len - find length of string
 *@st: string
 *Return: length of string
 */

int len(char *st)
{

int length = 1;

if(*st == '\0')
{
	return(0);
}

if (*st != '\0')
{
len = len + len(st + 1);

return (length);
}


return (length);
}



/**
 * check - check for string if its paalindrome of note
 *@string: string
 *@l: length of that string.
 *Return: int value of the num of matched charecters
 */

int check (char *string,int l)

{

int a = 0;
int check_result = 0;

if (l % 2 == 0 && l / 2 > l )
{
	return (0);
}

if (l % 2 != 0 && l / 2 == l)
{
	return(0);
}

if (l / 2 < l && *string != string[l])
{
	return (-1);
}

if (l / 2 < l && *string == string[l])
{

check_result = 1  + check(string + 1, l - 1);

return (check_result);
}



return ();

}



/**
 * is_palindrome - check if string is palindromee or not.
 *@s: string.
 *Return : 1 if its palindrome or 0 if not.
 */


int is_palindrome(char *s)
{

int result = 0;
int le = 0;

le = len(s) - 1;

if (*s == '')
{
	return (1);
}

else
{
	result = check (*s, le);

	if (result == le / 2)
	{
		return (1);
	}

	else 
	{
		return (0);
	}
}

return(result);
}
