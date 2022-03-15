#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - new type for struct_dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
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
