#include "3-calc.h"
#include "function_pointers.h"
#include <stdlib.h>

/**
 * op_add - function that sum an integer to another
 * @a: integer parameter
 * @b: integer parameter
 * Return: the result of the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that subtract an integer to another
 * @a: integer parameter
 * @b: integer parameter
 * Return: the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiplies two integer
 * @a: integer parameter
 * @b: integer parameter
 * Return: the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides two integer
 * @a: integer parameter
 * @b: integer parameter
 * Return: the result of the division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function provides the modulus of a division
 * @a: integer parameter
 * @b: integer parameter
 * Return: remainder of the division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
