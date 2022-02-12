#include <stdio.h>

/**
* main - combinations of single-digit numbers without printf
*
* Return: Always 0
*/

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');

	return (0);
}
