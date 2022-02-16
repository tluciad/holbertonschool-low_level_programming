#include "main.h"
/**
* times_table - prints the 9 times table, starting with 0
*/

void times_table(void)
{
	int n = 0;
	int m;
	int times_table;

	while (n < 10)
	{
		_putchar('0');
		_putchar(',');
		m = 1;

		while (m < 10)
		{
			times_table = n * m;
			if (times_table >= 10)
			{
				_putchar(' ');
				_putchar((times_table / 10) + '0');
				_putchar((times_table % 10) + '0');
			} else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(times_table + '0');
			}
			if (m < 9)
				_putchar(',');
			m++;
		}
		_putchar('\n');
		n++;
	}
}
