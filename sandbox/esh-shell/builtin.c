#include "main.h"

/**
 * changedir - this is impelemntaion of the builtin "cd" command.
 * @command: an array of string contain the command cd with the new WD.
 * Return: 0 if success  else -1.
*/
int changedir(char *command[])
{
	if(!command[1])
	return(0);

	if (chdir(command[1]) == -1)
	{
		fprintf(stderr, "bash: %s: %s: No such file or directory\n",command[0], command[1]);
		return(-1);
	}
	return(0);
}
/**
 * isNumber - Check if a string is a valid number.
 * @str: The input string to check.
 *
 * Return: 1 if the string is a number, 0 otherwise.
 */
int isNumber(const char *str) {
    char *endptr;
    strtol(str, &endptr, 10);  /* Base 10 for decimal integers */

    /* Check if strtol successfully parsed the entire string */
    if (*endptr != '\0') {
        return 0;
    }

    return 1;
}

/**
 * exit_program this is impelemntaion of the builtin "exit" command.
 * @command: an array of string contain the command exit.
 * Return: 0 if success  else -1.
*/
int exit_program(char *command[])
{
	int status;

	if (!command[1])
	exit(0);

	status = atoi(command[1]);
	if (isNumber(command[1]) == 0)
	{
		fprintf(stderr,"./hsh: 1: exit: Illegal number: %s\n",command[1]);
		return(-1);
	}

       if (command[1] && status >= 0)
        	exit(status);
	else
	fprintf(stderr,"./hsh: 1: exit: Illegal number: %s\n",command[1]);

	return(-1);
}
/**
 * which_builtin -  this function check if the enterd command is a builtin command or not.
 * @command: an array of string contain the command.
 * Return: the number of the command in array i have in certain order if success  else -1.
 */
int which_builtin(char *command[])
{
	int i;
	const char *builtins[] = {"cd", "exit", NULL};

	for (i = 0; builtins[i] != NULL; i++) 
	{
		if (strcmp(builtins[i], command[0]) == 0) 
			return (i);
	}
	return (-1);
}
/**
 * excute_builtin -  if the entered command is builtin it will choose the rigth function
 * to implement that command
 * @command: an array of string contain the builtin command.
 * Return: 0 if success  else -1.
 */
int excute_builtin(char *command[])
{
	int i,r;
	i = which_builtin(command);

	switch(i)
	{
	case(0):
		r = changedir(command);
		return(r);
	case(1):
		r = exit_program(command);
		return (r);
	default:
		return(-1);
		break;
	}

	return (-1);
}