#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc.
 *
 * @size: size of each element
 * @nmemb: number of members
 * Return: void.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return ('\0');

	s = malloc(size * nmemb);
	if (!s)
		return ('\0');

	for (i = 0; i < (size * nmemb); i++)
		s[i] = 0;

	return (s);
}
