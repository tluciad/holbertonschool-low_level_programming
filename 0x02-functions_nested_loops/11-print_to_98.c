#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints a n number until 98.
 * @n: Variable to be ejecuted.
 * Return: void
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
				printf("%d\n", n);
			else
				printf("%d, ", n);		}
	}
	else
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
				printf("%d\n", n);
			else
				printf("%d, ", n);
		}
	}
}
