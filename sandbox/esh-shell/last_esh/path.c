#include "main.h"

/**
 * _getenv - find the value of inviroment varialbe.
 * @name: name of the program.
 * @env: array of string contain the inviroment varialbe.
 * Return: string contain the value of the variable if success else NULL.
*/
char *_getenv2(char *name, char *env[])
{
	int i = 0;
	char *token = NULL;

	while (env[i])
	{
		token = strtok(env[i],"=");
		if(strcmp(token, name) == 0)
		break;
		++i;
	}
	if(strcmp(token, name) == 0)
	{
		return(strtok(NULL,"="));	
	}

	return (NULL);
}
/**
 * getpath - find the full path in the devise
 * @name: name of the program
 * Return: string contain the full path if success else NULL
*/
char *getpath(const char *name, char *env[]) 
{
	char *pathenv = _getenv2("PATH", env);
	struct stat st;
	char *full_path, *delim = ":";
	char *token;

	if (!pathenv)
        return NULL;

	if(stat(name,&st) == 0)
	return((char *)name);

	token = strtok(pathenv, delim);
	while (token)
	{
		full_path = (char *)malloc(strlen(token) + 1 + strlen(name) + 1);
		if (!full_path)
		{
			perror("malloc");
			free(token);
			return (NULL);
        	}

        	strcpy(full_path, token);
        	strcat(full_path, "/");
        	strcat(full_path, name);

        	if (stat(full_path, &st) == 0)
		{
         		/* free(token); */
          		return (full_path);
        	}
		free(full_path);
		token = strtok(NULL, delim);
	}
	free(token);
	return (NULL);
}
