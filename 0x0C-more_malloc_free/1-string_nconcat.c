#include "main.h"

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
 * string_nconcat - check the code
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate
 *
 * Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int size_1, size_2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size_1 = _strlen(s1);
	size_2 = _strlen(s2);

	if (n >= size_2)
	{
		s = malloc(sizeof(char) * size_1 + size_2 + 1);
		if (!s)
			return (NULL);
	}
	else
	{
		size_2 = n;
		s = malloc(sizeof(char) * size_1 + size_2 + 1);
		if (!s)
			return (NULL);
	}

	for (i = 0; i < size_1; i++)
		s[i] = s1[i];

	for (j = 0; j < size_2; j++, i++)
		s[i] = s2[j];

	s[i] = '\0';

	return (s);
}
