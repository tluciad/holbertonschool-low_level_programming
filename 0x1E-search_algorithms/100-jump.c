#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function that searches for a value in a sorted
 * array of integers using the Jump search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: int value searched or -1 if its NULL or doesn´t exist
 */
int jump_search(int *array, size_t size, int value)
{
	int start;
	size_t end;
	size_t i;

	if (array != NULL && size > 0)
	{
		end = sqrt(size);
		start = 0;
		i = 0;
		printf("Value checked array[%lu] = [%d]\n", i, start);
	}

	while (array[end] <= value && end < size)
	{
		start = end;
		end += sqrt(size);
		if (end > size - 1)
			end = size;
		printf("Value checked array[%lu] = [%d]\n", i, start);
	}
	for (i = start; i < end; i++)
	{
		if (array[i] == value)
			return (value);
		printf("Value checked array[%lu] = [%d]\n", i, start);
	}
	return (-1);
}
