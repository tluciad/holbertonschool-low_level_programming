#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_calloc - function that allocates memory for an array
 *@nmemb: elements of array
 *@size: bytes each element
 *Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *i;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return ('\0');

	i = malloc(size * nmemb);
	if (!i)
		return ('\0');

	for (j = 0; j < (size * nmemb); j++)
		i[j] = 0;

	return (i);
}
