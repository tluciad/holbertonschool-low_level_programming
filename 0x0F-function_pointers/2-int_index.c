#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index -  function that searches for an integer
 * @size: is the number of elements in the array
 * @array: array parameter
 * @cmp: is a pointer to the function to compare values
 * Return: (i) or (-1) or (0)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
	}
	return (-1);
}
