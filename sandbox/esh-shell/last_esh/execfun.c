#include "main.h"

int execbul(char **args)
{
        if (strcmp(args[0], "cd") == 0)
                return (cdfun(args));
        else if (strcmp(args[0], "exit") == 0)
                return (exitfun(args));
        else if (strcmp(args[0], "env") == 0)
                return(envfun(args));
        else if (strcmp(args[0], "setenv") == 0)
                return(_setenv(args));
        return(-1);
}
/**
 * execfun - split the input
 * @args: splited command
*/
int execfun(char **args)
{
        int status = 0, built;
        pid_t pid;
        struct stat st;
        char **env = environ, *path;

        if (!args)
                return (1);
        built = execbul(args);
        if(built != -1)
                return(built);

        pid = fork();
        if (pid > 0)
        {
                do
                {
                        waitpid(pid, &status, WUNTRACED);
                } while (!WIFEXITED(status) && !WIFSIGNALED(status));
                return (WEXITSTATUS(status));
               
        }
        else if (pid == 0)
        {
                path = getpath(args[0], env);
                if (stat(path, &st) == 0)
                {
                        if (execve(path, args, env) == -1)
                        {
                                free(path);
                                perror("execve");
                                if(errno == EINVAL)
                                exit(2);
                                exit(1);
                        }
                        free(path);
                        exit(126);
                }
                free(path);
                fprintf(stderr, "./%s: 1: %s: not found\n", "hsh", args[0]);
                exit(127);
        }
        else
        return(1);
}