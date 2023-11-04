#include "main.h"

/**
 * token
 * @arr
 * Return:
*/
char **token(char *arr)
{
    int i = 0;
    char **result = NULL;
    char *token, **temp;

    result = (char **)malloc(sizeof(char *));
    if (!result) {
        perror("malloc");
        return NULL;
    }

    token = strtok(arr, " \n\t");

    while (token) {
        result[i] = (char *)malloc(strlen(token) + 1);
        if (!result[i]) {
            perror("malloc");
            return NULL;
        }

        strcpy(result[i], token);
        i++;

       temp = (char **)realloc(result, (i + 1) * sizeof(char *));
        if (!temp) {
            perror("realloc");
            return NULL;
        }
        result = temp;

        token = strtok(NULL, " \n\t");
    }

    result[i] = NULL;

    return result;
}