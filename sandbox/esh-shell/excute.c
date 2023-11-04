#include "main.h"

/**
 * excute - 
 * @comand:
 * Return:
*/
int execute(char *command[])
{
    pid_t id;
    int status;

    id = fork();
    if (id == 0)
    {
        if (execve(command[0], command, NULL) == -1) {
            perror("execve");
            exit(1);
        }
    } 
    else if (id > 0)
    {
        wait(&status);
        return status;
    }
    else 
    {
        perror("fork");
        return (-1); 
    }

    return (-1);
}
