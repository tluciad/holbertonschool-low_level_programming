#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings followed by a new line
 * @n: the number of strings passed to the function
 * @separator: is the string to be printed between the strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *j;
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(args, char *);
		if (j == NULL)
			printf("(nil)");

		else
			printf("%s", j);

		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
