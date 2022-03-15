#ifndef _FILE_
#define _FILE_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - Define a new type struct with own, name and age of dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
