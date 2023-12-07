#include "main.h"

/**
 * parse - split the input
 * @line: command
 * Return: array of splited command
*/
char **parse(char *line)
{
	int len = 0;
	int cap = ARGBUF;
	char **tokens, *token;

	tokens = malloc(cap * sizeof(char *));
	if (!tokens)
	{
		perror("./shell: tokens error");
		return(NULL);
	}

	token = strtok(line, DELIMIT);
	while (token != NULL)
	{
		tokens[len++] = token;
		if (len >= cap)
		{
			cap += ARGBUF + 1;
			tokens = realloc(tokens, cap);
			if (!tokens)
			{
				if(tokens)
				free(tokens);
				perror("./shell: tokens error");
				return(NULL);
			}
		}
		token = strtok(NULL, DELIMIT);
	}
	tokens[len] = NULL;
	parse_var(tokens);
	return (tokens);
}

/**
 * parse_var - replecse variables if there.
 * @args: the input
 * Return: 0 if success else 1
*/
int parse_var(char **args)
{
	int i, j, k = 1,l;
	pid_t pid = getpid();

	for (i = 0; args[i]; i++) 
	{
		for (j = 0; args[i][j]; j++) 
		{
			if (args[i][j] == '$' && args[i][j + 1] == '$') 
			{
				sprintf(args[i] + j, "%d", pid);
				k = 0;
            		} 
	    		else if (args[i][j] == '$' && args[i][j + 1] == '?') 
	    		{
                		sprintf(args[i] + j, "%d", exit_stat);
				k = 0;
            		}
			else if (args[i][0] == '#')	/*handle comments*/
			{
				args[i][0] = '\0';
                		for (l = i + 1; args[l]; l++)
				{
                			args[l] = NULL;
                		}
				return(0);
			}
			else if (args[i][j] == '$')	/*when no valid var remove the string*/ 
			{
                		memmove(args[i] + j, args[i + 1], strlen(args[i + 1]) + 1);
                		i--;  
                		k = 0;
        		}
		}
	}
	return (k);
}