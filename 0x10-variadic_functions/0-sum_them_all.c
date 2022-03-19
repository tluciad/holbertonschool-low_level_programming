#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * Return: the sum of all parameters
 * @n: number parameter
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int result = 0;

	va_list args;

	va_start(args, n);

	for (; i < n; i++)
	{
		result += va_arg(args, int);
	}
	if (n == 0)
		return (0);
	va_end(args);
	return (result);
}
