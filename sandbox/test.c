#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void execute_command(char *command) {
    pid_t pid = fork();

    if (pid == 0) {
        // Child process
        char *args[64];  // Adjust the size as needed
        int i = 0;
        char *token = strtok(command, " \n\t");

        while (token != NULL) {
            args[i] = token;
            i++;
            token = strtok(NULL, " \n\t");
        }

        args[i] = NULL;

        if (execvp(args[0], args) == -1) {
            perror("execvp");
            exit(1);
        }
    } else if (pid < 0) {
        perror("fork");
    } else {
        // Parent process
        int status;
        waitpid(pid, &status, 0);
    }
}

int main() {
    char input[256];  // Adjust the size as needed

    while (1) {
        printf("#cisfun$ ");
        if (fgets(input, sizeof(input), stdin) == NULL) {
            break;  // Exit the loop on Ctrl+D (EOF)
        }

        if (strlen(input) > 1) {
            input[strlen(input) - 1] = '\0';  // Remove the newline character

            execute_command(input);
        }
    }

    return 0;
}