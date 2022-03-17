#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * array_iterator - executes a function given as a parameter
 * @size: size of the array
 * @array: array to use
 * @action: pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j = 0;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	while (j < size)
	{
		(*action)(array[j]);
		j++;
	}
}
