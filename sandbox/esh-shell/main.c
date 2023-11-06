#include "main.h"
#include <stdbool.h>


int main(int argc, char *argv[], char *env[])
{
    char *arr = NULL;
    size_t co = 0;
    char *prom = "$";
    char **command_token;

	(void)argc;
	(void)argv;
    while (1) 
    {
	if(isatty(STDIN_FILENO) != 0) {
        write(1,prom,1);	}

        if (getline(&arr, &co, stdin) == -1) 
	{
	/*	printf("\n"); */
            return 0;	}

        command_token = token(arr);
        if (command_token) {
            execute(command_token,env);
            free_command(command_token);
	    free(arr);
        }
	else {
            printf("Invalid input.\n");
        }

        arr = NULL;
    }

    return (0);
}