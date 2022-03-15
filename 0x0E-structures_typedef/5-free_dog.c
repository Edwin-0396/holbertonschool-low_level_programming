#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Function that frees dogs.
 * @d: pointer to the struct
 *
 * Return: Always 0.
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;

	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}
