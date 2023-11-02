
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

int create_file(const char *filename, char *text_content)
{
	size_t fd,o,r,w;
	int len;

	if (!filename)
	return(-1);

	fd = open(filename,O_CREAT | O_RDWR | O_TRUNC, 0600);  /*0600: This is an octal number that represents the file permissions */
	len = strlen(text_content);
	w = write(fd,text_content,len);

	if (w == -1 || fd == -1)
	return (-1);

	close(fd);
	return (1);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    int res;

    if (ac != 3)
    {
        dprintf(2, "Usage: %s filename text\n", av[0]);
        exit(1);
    }
    res = create_file(av[1], av[2]);
    printf("-> %i)\n", res);
    return (0);
}