#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - check the code
 * @a: input parameter
 * @size: size of parameter
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, k = 0, l = 0;

	while (i < size)
	{
		while (j < size)
		{
			if (i == j)
				k = k + a[(size + 1) * i];
			if (i + j == size - 1)
				l = l + a[(size - 1) * (i + 1)];
			j++;
		}
		j = 0;
		i++;
	}
	printf("%d, %d\n", k, l);
}
