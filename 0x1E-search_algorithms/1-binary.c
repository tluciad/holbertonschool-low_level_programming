#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted array
 * of integers using the Binary search algorithm  *
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the index where value is located or -1 f value is not present
 * in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = 0, mid = 0, i = 0;

	if (array == NULL || size == 0)
		return (-1);
	right = size - 1;
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == right)
			{
				printf("%d\n", array[right]);
				break;
			}
			else
				printf("%d, ", array[i]);
		}

		mid = (left + right) / 2;

		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
