#include "main.h"

/**
 * free_command
 * 
 * 
*/
void free_command(char **arr) {
    int i;

    if (arr) {
        for (i = 0; arr[i]; i++) {
            free(arr[i]);
        }
        free(arr);
    }
}

