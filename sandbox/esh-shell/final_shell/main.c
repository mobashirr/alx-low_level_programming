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
	char *(*arr)(void);
	char *line;
	char prom[5] = " ($) ";
	char **command_token = NULL;

	(void)argc;
	(void)argv;
	while (1) 
	{
		if(isatty(STDIN_FILENO) != 0)
			write(1,&prom,5);

		arr = _getline;

        	line = arr();
        	if (!line)
           		 exit(0);
		else
		{
			if (line && line[0] != '\0')
			command_token = token(line);
			if (command_token) 
			{
				control(command_token,env);
				free_command(command_token);
			}
			free(line);
		}
	}
		return (0);
}