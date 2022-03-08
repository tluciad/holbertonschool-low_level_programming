#include <stdio.h>

/**
*main - lowercase alphabet in reverse
*
* Return: Always 0
*/

int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
		putchar(ch);
	printf("\n");

	return (0);
}
