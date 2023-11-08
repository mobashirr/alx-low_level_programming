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
 * exit_program this is impelemntaion of the builtin "exit" command.
 * @command: an array of string contain the command exit.
 * Return: 0 if success  else -1.
*/
int exit_program(char *command[])
{
       if (command[1])
        	exit(atoi(command[1]));
        exit(0);

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