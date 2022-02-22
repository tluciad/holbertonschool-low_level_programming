#include "main.h"
/**
*print_rev -  prints a string, in reverse, followed by a new line
**@s: pointer char
*Return: (void)
*/
void print_rev(char *s)
{
	int i = 0;
	int j = 0;

		while (s[i] != '\0')
		{
			i = i + 1;
			s = s + 1;
		}
		for (j = 1; j <= i; j++)
		_putchar(s[i] - j);
	_putchar('\n');
}
