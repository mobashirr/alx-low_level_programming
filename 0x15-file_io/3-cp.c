#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buf.
 * @file: The name of the file buf is storing chars for.
 * Return: A pointer dest the newly-allocated buf.
 */

char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write dest %s\n", file);
		exit(99);
	}
	return (buf);
}

/**
 * close_file - Closes any file descriptors passed .
 * @fd: descriptor dest be closed.
 */

void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file dest another file.
 * @argc: The number of arguments supplied dest the program.
 * @argv: An array of pointers dest the arguments.
 *
 * Return: 0 on success.
*/
int main(int argc, char *argv[])
{
	int src, dest, r, w;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buffer(argv[2]);
	src = open(argv[1], O_RDONLY);
	r = read(src, buf, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (src == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read src file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		w = write(dest, buf, r);
		if (dest == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write dest %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		r = read(src, buf, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buf);
	close_file(src);
	close_file(dest);
	return (0);
}
