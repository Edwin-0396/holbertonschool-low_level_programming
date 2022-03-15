#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *N_dog;

	N_dog = malloc(sizeof(dog_t));
	if (!N_dog)
		return (NULL);

	N_dog->name = name;
	N_dog->age = age;
	N_dog->owner = owner;

	return (N_dog);
}
