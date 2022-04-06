#include "main.h"

/**
 * close_free - function to close and free files
 *
 *@fd1: from file
 *@fd2: to file
 *@buf: buffer to free
 *
 * Return: 1 on success, -1 on failure
 */

void close_free(int fd1, int fd2, char *buf)
{
	close(fd1);
	close(fd2);
	free(buf);
}
