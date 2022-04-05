#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to
 * the POSIX standard output.
 *@filename: name of the file
 *@letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t read_out, write_out;

	if (!filename)
		return (0);

	buf = malloc(letters * sizeof(char) + 1);
	if (!buf)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	read_out = read(fd, buf, letters);
	if (read_out == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	write_out = write(STDOUT_FILENO, buf, read_out);
	if (write_out == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);
	return (write_out);
}
