#include "main.h"

/**
 * _realloc - function that creates an array of integers.
 *
 * @ptr: size of each element
 * @old_size: number of members
 * @new_size: 
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

	if (new_size > old_size)
		new_size = old_size;

	if (new_size == old_size)
		return (ptr);

	s = malloc(new_size);
	if (!s)
		return(NULL);

	for (i = 0; i < new_size; i++)
		s[i] = b[i];
	
	free(ptr);

	return (s);
}
