#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: input parameter
 * Return: length of string or 0.
 */

int _strlen_recursion(char *s)
{
	if (!s || !*s)
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
