#include "main.h"

/**
 * excute - excute programs.
 * @comand: array of string contain the proram (command).
 *  that will be excuted and the arguments for that program.
 * @env: enviroment varialbe from main function.
 * Return: 0 if success or -1 if not.
 */
int execute(char *command[], char *env[])
{
	pid_t id;
	int status;
	struct stat st;
	char *path;

	if (!(command[0]))
		return (320);

	id = fork();
	if (id == 0)
	{
		path = getpath(command[0], env);
		if (stat(path, &st) != -1 || !*command)	/*stat return -1  if the program doesn't exist*/
		{
			if (execve(path, command, env) == -1)
			{
				fprintf(stderr, "./%s: 1: %s: not found\n", "hsh", command[0]);
				return(EXIT_FAILURE);

			}
			return(1);
		}
			fprintf(stderr, "./%s: 1: %s: not found\n", "hsh", command[0]);
				return(127);
	}
	else if (id > 0)
	{
		do
		{
			waitpid(id, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
		if (stat(command[0], &st) != -1)
			return (320);
	}
	return (320);
}
