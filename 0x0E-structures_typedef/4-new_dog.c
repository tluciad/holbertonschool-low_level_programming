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
	int name_len = 0, owner_len = 0, i;

	while (name[name_len++])
		;

	while (owner[owner_len++])
		;

	N_dog = malloc(sizeof(dog_t));
	if (!N_dog)
		return (NULL);

	N_dog->name = malloc(name_len * sizeof(N_dog->name));
	if (!N_dog->name)
	{
		free(N_dog);
		return (NULL);
	}

	for (i = 0; i < name_len; i++)
		N_dog->name[i] = name[i];

	N_dog->age = age;

	N_dog->owner = malloc(owner_len * sizeof(N_dog->owner));
	if (!N_dog->owner)
	{
		free(N_dog->name);
		free(N_dog);
		return (NULL);
	}

	for (i = 0; i < owner_len; i++)
		N_dog->owner[i] = owner[i];

	return (N_dog);
}
