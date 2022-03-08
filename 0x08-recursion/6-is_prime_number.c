#include "main.h"
/**
* _prime - find if the input integer is a prime number
*@x: input parameter
*@y: input parameter
*Return: prime
*/

int _prime(int x, int y)
{
	if (y == x)
		return (1);

	else if (x % y == 0)
		return (0);

	return (_prime(x, y + 1));
}

/**
 * is_prime_number - function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 * @n: input parameter
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (_prime(n, 2));
}
