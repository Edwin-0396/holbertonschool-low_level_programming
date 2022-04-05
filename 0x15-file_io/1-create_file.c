#include "main.h"

/**
 * create_file - function that creates a file.
 *@filename: the name of the file to create
 *@text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t i;
	ssize_t write_out;

	if (!filename)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT, 0600);
		if (fd == -1)
			return (-1);
		return (1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	while (text_content[i])
		i++;

	write_out = write(fd, text_content, i);
	if (write_out == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
