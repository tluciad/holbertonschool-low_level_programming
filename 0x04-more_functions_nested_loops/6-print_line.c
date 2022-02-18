#include "main.h"
/**
*print_line - draw straight line
*@n: lines to print
*Return: (void)
*/
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar ('\n');
}
