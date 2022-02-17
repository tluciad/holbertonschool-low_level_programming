#include "main.h"
/**
*print_numbers - Function to print numbers from 0 to 9
*Return: Always 0 (Succes)
*/
void print_numbers(void)
{
	char x;
	int i;

	for (i = 0; i < 2; i++)
	{
		for (x = '0'; x <= '9'; x++)
			_putchar (x);
	_putchar ('\n');
	}
}
