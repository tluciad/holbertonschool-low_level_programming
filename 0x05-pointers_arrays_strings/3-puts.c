#include "main.h"
/**
*_puts - prints a string, followed by a new line, to stdout
*@str: string to print to stdout
*Return: (void)
*/
void _puts(char *str)
{
		int i;

		str = "string";

		while (str != 0)
		{
			_putchar(*str);
			str++;
		}

		for (i = 0; i < 6; i++)
			_putchar("string"[i]);
		_putchar('\n');
}
