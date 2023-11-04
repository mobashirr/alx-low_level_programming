#include "main.h"

extern char** environ;

int main(void)
{
    char *arr = NULL;
    size_t co = 0;
    char *prom = "sozia $ ";
    char **command_token;

    while (1) 
    {
        printf("%s", prom);
        if (getline(&arr, &co, stdin) == -1) 
	{
		printf("\n");
            return -1;	}

        command_token = token(arr);
        if (command_token) {
            int failure = execute(command_token);
            if (failure == -1) {
                printf("Error executing the command.\n");
            }

            free_command(command_token);
        } else {
            printf("Invalid input.\n");
        }

        free(arr);
        arr = NULL;
    }

    return 0;
}