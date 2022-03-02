#include "main.h"
/**
*_puts_recursion - prints a string, followed by a new line
*Return: void
*@s: input
*/
void _puts_recursion(char *s)
{
	if (!s || !*s)
	{
		_putchar ('\n');
		return;
	}

	_puts_recursion(s + 1);
	_putchar(*s);
}
