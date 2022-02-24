#include "main.h"
/**
*reverse_array - reverses the content of an array of integers.
*@n: the number of elements to swap
*@a: an array of integers
*Return: void
*/

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;

	n--;
	while (i < n)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		i++;
		n--;
	}
}
