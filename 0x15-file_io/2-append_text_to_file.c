#include "main.h"

/**
 * append_text_to_file - function that appends
 * text at the end of a file.
 *@filename: the name of the file to create
 *@text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0;
	size_t i = 0;
	ssize_t write_out = 0;

	if (!filename)
		return (-1);

	if (!text_content)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (!fd)
		return (-1);

	while (text_content[i])
		i++;

	write_out = write(fd, text_content, i);
	if (write_out == -1)
		return (-1);

	close(fd);
	return (1);
}
