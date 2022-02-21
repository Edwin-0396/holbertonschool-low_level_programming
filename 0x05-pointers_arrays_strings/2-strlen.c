#include "main.h"
#include <unistd.h>

/**
 * _strlen - function that returns the length of a string.
 *
 * @s: input parameter for the function
 * Return: void.
 */

int _strlen(char *s)
{
	int i = 0;

	while (1)
	{
		if (*(s + i) == ('\0'))
			_putchar(i + '0');
		i++;
	}
	return (0);
}
