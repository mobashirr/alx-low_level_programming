#include "main.h"

/**
 * len_found - finds the length of a string
 * @st: pointer to the string
 * Return: length of the string
 */
size_t len_found(char *st)
{
	size_t count;

	for (count = 0; st[count]; count++)
		;
	return (count);
}

/**
 * append_text_to_file - appends a text at the end of a file.
 * @filename: the file name.
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		len = write(fd, text_content, len_found(text_content));

	close(fd);

	if (len == -1)
		return (-1);

	return (1);
}
