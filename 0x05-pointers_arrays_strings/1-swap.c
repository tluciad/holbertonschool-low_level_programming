#include "main.h"
/**
*swap_int - function that swaps the values of two integers
*@a: variable to swap value
*@b: variable to swap value
**/
void swap_int(int *a, int *b)
{
	b = &a;
	a = &b;
}
