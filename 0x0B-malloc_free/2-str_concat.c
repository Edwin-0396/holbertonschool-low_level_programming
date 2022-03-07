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
 * str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL or 0.
 */

char *str_concat(char *s1, char *s2)
{

	char *array;
	unsigned int i = 0, j = 0, size_1, size_2;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	size_1 = _strlen(s1);
	size_2 = _strlen(s2);

	array = malloc((size_1 * sizeof(*s1) + size_2 * sizeof(*s2)) + 1);

	while (i < size_1 + size_2)
	{
		if (i < size_1)
			array[i] = s1[i];
		else
			array[i] = s2[j++];
		i++;
	}

	return (array);
}
