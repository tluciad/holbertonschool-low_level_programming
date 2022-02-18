#include "main.h"
/**
*print_diagonal - draw diagonal line on the terminal
*@n: number of times "_" is printed
*Return: void
*/

void print_diagonal(int n)
{
	int i = 1;

		if (n <= 0)
		_putchar('\n');

		else
		{
			while (i <= n)
			{
				int j = 1;

				while (j < i)
				{
					_putchar(' ');
					j++;
				}
				_putchar('\\');
				_putchar('\n');
				i++;
			}
		}
}
