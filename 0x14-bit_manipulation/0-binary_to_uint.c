#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: he converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int j = 1;
	unsigned int i = 0;
	int c;
	unsigned int len;

	len = strlen(b);

	if (!b)
		return (0);

	for (c = len - 1; c >= 0; c--)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
		if (b[c] == '1')
		{
			i += j;
		}
		j *= 2;
	}
	return (i);
}
