#include <stdio.h>
#include <string.h>
#include <math.h>

/**
 * check - the ascii
 * @st: string
 * @c: current
 * @a: all
 * Return: int
 */
 
int check(char *st, int c, int a)
{
int con = 1;
char f = '1';


while (st[c] != f  && st[c] != '\0')
 {
 ++f;
++con;
 }

 return(con);
}

/**
 * _atoi - the ascii
 * @s: string
 * Return: int
 */

int _atoi(char *s)
{
int all, co = 0, num = 0, conv = 0;

if (s == NULL )
return (0);

for(all = 0; s[all] != '\0'; all++)
;

if(s[co] == '-')
{ all = all - 1;
++co;
}
 
while (s[co] != '\0' )
{
conv = check(s, co, all);
num = num * 10 + conv;

if(s[co - 1] == '-' && co - 1 == 0 )
{
num = num * (-1);
}

++co;
}

return (num);
}
