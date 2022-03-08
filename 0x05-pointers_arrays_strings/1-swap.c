#include "main.h"
/**
*swap_int - function that swaps the values of two integers
*@a: integer 1
*@b: integer 2
**/
void swap_int(int *a, int *b)
{
		int i1;
		int i2;

	i1 = *a;
	i2 = *b;
	*a = i2;
	*b = i1;
}
