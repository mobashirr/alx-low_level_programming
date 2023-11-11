#include "main.h"

/**
 * 
 * 
 * 
*/
char **copy_environment(void)
{
    char **env = NULL;
    int i,k,j;

    for (i = 0; environ[i]; i++)
        ;

    env = malloc((i + 1) * sizeof(char *));
    if (!env)
        return NULL;

    for (j = 0; j < i; j++)
    {
        env[j] = strdup(environ[j]);
        if (!env[j])
        {
            for ( k = 0; k < j; k++)
                free(env[k]);
            free(env);
            return NULL;
        }
    }

    env[i] = NULL;

    return env;
}

/**
 * _setenv -
 * @args:
 * Return: 0 if success
*/
int _setenv(char **args)
{
    char **env = copy_environment();
    size_t len = 0, new_len = 0;
    int i, name_len;

    if (!args || !args[0] || !args[1])
    {
        free(env);
        return 1;
    }

    name_len = strlen(args[0]);

    for (i = 0; env[i]; i++)
        len += strlen(env[i]) + 1;

    for (i = 0; env[i]; i++)
    {
        if (strncmp(env[i], args[0], name_len) == 0 && env[i][name_len] == '=')
        {
            if (!atoi(args[2]))
            {
                free(env);
                return 0;
            }
            free(env[i]);
            break;
        }
    }

    new_len = len + name_len + strlen(args[1]) + 2;
    env = realloc(env, (i + 2) * sizeof(char *));
    if (!env)
    {
        free(env);
        return 1;
    }

    env[i] = malloc(new_len);
    if (!env[i])
    {
        free(env);
        return 1;
    }

    snprintf(env[i], new_len, "%s=%s", args[1], args[2]);
    env[i + 1] = NULL;

    environ = env;

    return 0;
}
