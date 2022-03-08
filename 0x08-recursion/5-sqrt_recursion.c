#include "main.h"
/**
*root_square - returns the natural square root of a number
*Return: root square of a number
*@x: input parameter
*@y: input parameter
*/

int root_square(int x, int y)
{
	if (y * y == x)
		return (y);

	if (y * y > x)
		return (-1);

	return (root_square(x, y + 1));
}

/**
*_sqrt_recursion - returns the natural square root of a number
*@n: input parameter
*Return: square root of a number
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (root_square(n, 0));
}
