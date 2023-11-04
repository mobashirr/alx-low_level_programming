#include "main.h"

/**
 * 
 * 
 * 
*/
void free_command(char **arr)
{
	int i;

	if (arr)
	{
		for(i = 0; arr[i]; i++)
		{
			free(arr[i]);
		}
	}
}

