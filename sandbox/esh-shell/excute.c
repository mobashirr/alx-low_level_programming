#include "main.h"

/**
 * excute - 
 * @comand:
 * Return:
*/
int execute(char *command[], char *env[])
{
    	pid_t id;
    	struct stat st;

	if(!(command[0]))
	return (0);

    	id = fork();
    	if (id == 0)
    	{
		if (stat(command[0],&st) != -1 || !*command)
		{
        		if (execve(command[0], command, env) == -1) 
			{
        			perror("execve");
				 exit(EXIT_FAILURE);	
			}
		}
	perror("execve");
	exit(0);
	}
	else if (id > 0)
	{
		wait(&id);
		if(stat(command[0],&st) != -1)
        		return (0);
	}
    return (-1);
}
