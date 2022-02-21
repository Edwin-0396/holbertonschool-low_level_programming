#include "main.h"
#include <unistd.h>

/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line.
 *
 * @s: input parameter for the function
 * Return: void.
 */

void print_rev(char *s)
{
	int i = 0;


	while (s[i] != '\0')
	{
		i++;
	}

	while (i >= 0)
	{
		_putchar(s[i-1]);
		i--;
	}
	_putchar('\n');

}

