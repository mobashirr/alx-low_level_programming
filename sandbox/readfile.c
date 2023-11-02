#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - read and print textfile
 * @filename
 * @letters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t fd,r,w;
	int c;

	if(!filename)
	return (0);

	char *buf = malloc(letters + 1);

	fd = open(filename,O_RDONLY);
	if ((int)fd == -1) {
		free(buf);
		return (0);
	}

	r = read(fd,buf,letters);
	if ((int)r == -1)
 	{
		free(buf);
		return (0);
	}
	for (c = 0; buf[c] != '\0' && buf[c]; c++){
	}
buf[c] = '\0';

	w = write(STDOUT_FILENO,buf,letters);
	if ((int)w == -1) {
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	
	return(w);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    ssize_t n;

    if (ac != 2)
    {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }
    n = read_textfile(av[1], 114);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile(av[1], 1024);
    printf("\n(printed chars: %li)\n", n);
    return (0);
}