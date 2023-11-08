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
	const char prom[9] = "sozoia $ ";
	char **command_token = NULL;
	int status;

	(void)argc;
	(void)argv;
	while (1) 
	{
		if(isatty(STDIN_FILENO) != 0)
			write(1,&prom,8);

		if (getline(&arr, &co, stdin) == -1)
		break;

		command_token = token(arr);
		if (command_token) 
		{
			status = control(command_token,env);
			if(status != 320)
			break;

			free_command(command_token);
			free(arr);
		}
		else
			free(arr);

		arr = NULL;
	}

	switch (status)
	{
	case(0):
		exit(0);
	case(1):
		exit(1);
	case(2):
		exit(2);
	case(127):
		exit(127);
	default:
		break;
	}
		return (0);
}
