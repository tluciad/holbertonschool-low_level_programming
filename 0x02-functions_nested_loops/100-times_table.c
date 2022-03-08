#include "main.h"

/**
* print_times_table - prints the n times table, from 0 to 15
* @n: The value of the times table to be printed.
*/

void print_times_table(int n)
{
	int a, b, mult;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);

			for (b = 1; b <= n; b++)
			{
				_putchar(44);
				_putchar(32);

				mult = a * b;

				if (mult <= 99)
					_putchar(32);
				if (mult <= 9)
					_putchar(32);

				if (mult >= 100)
				{
					_putchar((mult / 100) + 48);
					_putchar(((mult / 10)) % 10 + 48);
				}
				else if (mult <= 99 && mult >= 10)
				{
					_putchar((mult / 10) + 48);
				}
				_putchar((mult % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
