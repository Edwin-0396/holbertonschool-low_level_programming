#include "main.h"
#include "3-copy_text_to_file.c"
#include "3-close-free.c"

/**
 * main - check the code
 *@ac: number of arguments
 *@av: arguments
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int copy;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy = copy_text_to_file(av[1], av[2]);
	if (copy == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	else if (copy == -2)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	else if (copy != 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", copy);
		exit(100);
	}

	return (0);
}
