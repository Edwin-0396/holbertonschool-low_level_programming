#include "main.h"

/**
 * _strcat - Function that concatenates two strings.
 * @dest: input parameter
 * @src: input parameter
 * Return: pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
