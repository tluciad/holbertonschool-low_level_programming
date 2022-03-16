#include "dog.h"
#include <stdio.h>

/**
 * free_dog - function that frees dogs
 * @d: pointer dog
 * Return: none
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
