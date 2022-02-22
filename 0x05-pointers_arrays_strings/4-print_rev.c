#include "main.h"
/**
*print_rev -  prints a string, in reverse, followed by a new line
*
*@s: char pointer
*Return: (void)
*/
void print_rev(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
