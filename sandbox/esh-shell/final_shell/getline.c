#include "main.h"

char *_getline(void)
{
    char *buffer = NULL;
    size_t bufsize = 0;
    ssize_t i = 0;
    char c;
    char *temp;

    while (1) {
        ssize_t bytes_read = read(STDIN_FILENO, &c, 1);

        if (bytes_read == -1) {
            perror("read");
            free(buffer);
            return NULL;
        }

        if (bytes_read == 0 || c == '\n') {
            if (buffer != NULL && bufsize > 0) {
                buffer[i] = '\0';  
                return buffer;
            } else {
                return NULL; 
            }
        }

        if (i + 1 >= (int)bufsize) {
            bufsize += BUFFER_SIZE;
            temp = realloc(buffer, bufsize);

            if (temp == NULL) {
                perror("realloc");
                free(buffer);
                return NULL;
            }

            buffer = temp;
        }

        buffer[i] = c;
        i++;
    }
}