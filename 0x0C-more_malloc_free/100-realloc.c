#include "main.h"

/**
 * _realloc - function that creates an array of integers.
 *
 * @ptr: old array
 * @old_size: size of old array
 * @new_size: size for new array
 * Return: void.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	char *b = ptr;
	unsigned int i;

	if (!ptr)
	{
		s = malloc(new_size);
		return (s);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	s = malloc(new_size);
	if (!s)
		return (NULL);

	if (new_size > old_size)
		new_size = old_size;

	for (i = 0; i < new_size; i++)
		s[i] = b[i];

	free(ptr);

	return (s);
}
