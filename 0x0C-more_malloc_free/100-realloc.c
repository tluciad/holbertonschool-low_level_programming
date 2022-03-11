#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *_realloc - function that reallocates a memory block
 *@old_size: size, in bytes
 *@new_size: new size in bytes
 *@ptr: pointer to the memory previously allocated
 *Return: s
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
