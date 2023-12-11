#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

char* itoa(int num, char* str, int base) 
{
    sprintf(str, "%d", num);
    return str;
}

int rand(void)
{
    int arr[6] = {9, 8, 10, 24, 75, 9};
    const char *name = "RUN_C";
    char *ii = getenv(name);
    int i;

    if (ii == NULL) 
    {
        setenv(name, "0", 1);
        i = 0;
    } 
    else 
    {
        i = atoi(ii);
        if (i >= 5 || i < 0) 
	{
            setenv(name, "0", 1);
            i = 0;
        } 
	else 
	{
            ++i;
            char str[10];
            setenv(name, itoa(i, str, 10), 1);
        }
    }

    return arr[i];
}
