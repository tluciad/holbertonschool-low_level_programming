#include "main.h"
/**
*main - _putchar main.h
*
*Return:Always 0.
*/

int main(void)
{
	char PUT[8] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
		_putchar(PUT[i]);
	_putchar('\n');
	return (0);
}
