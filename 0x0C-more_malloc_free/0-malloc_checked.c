#include "main.h"

/**
 * malloc_checked - check the code
 * @b: input for the function
 *
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
