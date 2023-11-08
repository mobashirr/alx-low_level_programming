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
	char prom[1] = "$";
	char **command_token = NULL;

	(void)argc;
	(void)argv;
	while (1) 
	{
		if(isatty(STDIN_FILENO) != 0)
			write(1,&prom,1);

		if (getline(&arr, &co, stdin) == -1)
			exit (0);

		command_token = token(arr);
		if (command_token) 
		{
			control(command_token,env);
			free_command(command_token);
			free(arr);
		}
		else
			free(arr);

		arr = NULL;
	}
		return (0);
}
