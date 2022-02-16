#include "main.h"
/**
* times_table - prints the 9 times table, starting with 0
*/

void times_table(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		_putchar(n);
		if (n != 57)
		{
			_putchar(',');
			_putchar(' ');
		}
	_putchar('\n');
	}
}
