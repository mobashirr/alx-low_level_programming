#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    for (int i = 0; i < 3; i++) {
        char *newProgramPath = "/bin/ls";
        char *const newProgramArgs[] = {newProgramPath, NULL};
        
        if (execve(newProgramPath, newProgramArgs, NULL) == -1) {
            perror("execve");
            exit(EXIT_FAILURE);
        }
    }

    printf("This line will not be reached because execve replaces the current process.\n");

    return 0;
}

