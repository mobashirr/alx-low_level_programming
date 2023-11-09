#include "main.h"
#include "main.h"

/**
 * main - entry point
 * @argc:
 * @argv:
 * @env:
 * Return: 0
*/
int main(int argc, char *argv[], char *env[])
{
	char *arr = NULL;
	size_t co = 0;
	char prom[5] = " ($) ";
	char **command_token = NULL;
	int status;

	(void)argc;
	(void)argv;
	while (1) 
	{
		if(isatty(STDIN_FILENO) != 0)
			write(1,&prom,5);

		if (getline(&arr, &co, stdin) == -1)
			break;

		command_token = token(arr);
		if (command_token) 
		{
			status =control(command_token,env);
			free_command(command_token);
			free(arr);
		}
		else
		free(arr);


		arr = NULL;
	}

		if(arr)
		free(arr);
		exit(status);

		return (0);
}