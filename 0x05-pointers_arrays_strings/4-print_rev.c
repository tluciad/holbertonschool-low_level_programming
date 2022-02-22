#include "main.h"
/**
*print_rev -  prints a string, in reverse, followed by a new line
*
*@s: char pointer
*Return: (void)
*/
void print_rev(char *s)
{
	char actual_char;
	int i = 0;
	int j = 0;

		while (s[i] != '\0')
				i++;
				i--;
		while (j <= i)
		{
			actual_char = s[j];
			s[j] = s[i];
			s[i] = actual_char;
			i--;
			j++;
		}
		_putchar(j);
	_putchar('\n');
}
