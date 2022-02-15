#include "main.h"
/**
*print_alphabet_x10 - alphabet in lowercase with _putchar x10
*Return: Always 0 (Succes)
*/
void print_alphabet_x10(void)
{
	char x;
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
			_putchar (x);
	_putchar ('\n');
	}
}
