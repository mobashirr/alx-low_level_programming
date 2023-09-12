#include <unistd.h>
#include "main.h"
/**
 * main - program print _putchar
 *
 * Return:  Always (0)
 */

int putchar(char c)
{

return (write(1, &c, 1));

}
