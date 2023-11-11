#include "main.h"

int exit_stat = 0;
/**
 * main - entry point
 * Return: 0
*/
int main(void)
{
        char *line = NULL, **tokens;
	size_t len = 0;
        const char *prompt = "(shell A&M)$ ";
        static int status = 0;

        while(1)
        {
		if(isatty(STDIN_FILENO) != 0)
		write(1,prompt,12);

		if (getline(&line, &len, stdin) == -1)
			break;

                tokens = parse(line);

                if(tokens[0])
                        status = execfun(tokens);

		if(tokens)
                        free(tokens);
        }
	if(line)
		free(line);

        exit(status);
        return (0);
}