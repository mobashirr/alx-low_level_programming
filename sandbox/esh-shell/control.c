#include "main.h"

/**
 * control - this function responsible of what will be the next step
 *  after entering the command.
 * @command_token: is an array of string contain command after tokenization.
 * @env: array of string contain the enviroment variables
 * Return: 0 if the command excuted seccessfully else return -1
*/
int control(char *command_token[],char *env[])
{
	int bu = -1;
    	int ex = -1;
	int check;


    	if(!command_token[0])
		return 0;

	check = which_builtin(command_token);
	if (check != -1)
		bu = excute_builtin(command_token);

	if (bu == -1 && check == -1)
		ex = execute(command_token, env);

	if (ex == -1)
		return -1;

	return 0;
}