#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: value array
 * @max: value array
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *s;
	int i;

	if (min > max)
		return (0);

	s = malloc(sizeof(int) * (max - min + 1));
	if (!s)
		return (0);

	for (i = min; min <= max; i++, min++)
		*(s + 1) = i;

	return (s);
}
