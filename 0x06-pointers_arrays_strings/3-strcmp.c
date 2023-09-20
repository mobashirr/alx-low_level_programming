#include "main.h"

/**
 * _strcmp - compare two strings
 *@s1: first string
 *@s2: second string
 *Return: if Return value < 0 then it indicates str1 is less than str2
 *if Return value > 0 then it indicates str2 is less than str1
 *if Return value = 0 then it indicates str1 is equal to str2
 */

int _strcmp(char *s1, char *s2)
{

  while (*S1 != '\0' && *s2 != '\0' && *s1 == *s2)
  {
    ++s1;
    ++s2;
  }
  
if (*s1 != *s2)
{
return (*s1 - *s2);
}
else 
{
return (0);
}
  
}
