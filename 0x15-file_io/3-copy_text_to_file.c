#include "main.h"

/**
 * copy_text_to_file - function that appends
 * text at the end of a file.
 *@file_from: the name of the file to create
 *@file_to: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int copy_text_to_file(const char *file_from, char *file_to)
{
	int fd1, fd2, aux, write_out, read_out;
	char *buf;

	read_out = 1;
	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
		return (-1);
	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
		return (-2);
	buf = (char *)malloc(sizeof(char) * 1024);
	if (!buf)
		return (-1);
	while (read_out > 0)
	{
		read_out = read(fd1, buf, 1024);
		if (read_out == -1)
		{
			close_free(fd1, fd2, buf);
			return (-1);
		}
		write_out = write(fd2, buf, read_out);
		if (write_out == -1)
		{
			close_free(fd1, fd2, buf);
			return (-2);
		}
	}
	aux = close(fd1);
	if (aux == -1)
		return (fd1);
	aux = close(fd2);
	if (aux == -1)
		return (fd2);
	free(buf);
	return (1);
}
