#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - function that returns the length of a string.
 *
 * @s: input parameter for the function
 * Return: void.
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strdup - function that
 * returns a pointer to a newly allocated space in memory.
 * @str: string to replicate
 *
 * Return: NULL or 0.
 */

char *_strdup(char *str)
{
	char *array;
	unsigned int i, size;

	if (!str)
		return (NULL);

	size = _strlen(str) + 1;
	array = malloc(sizeof(char) * size);

	if (!array)
		return (NULL);

	i = 0;

	while (i < size)
	{
		array[i] = str[i];
		i++;
	}

	return (array);
}
