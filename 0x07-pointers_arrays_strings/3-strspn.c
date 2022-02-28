#include "main.h"
#include <stdio.h>
/**
*_strspn - gets the length of a prefix substring.
*@s: string to be scanned
*@accept: string containing characters to match
*Return: number of bytes in the initial segment of s
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b = 0, c = 0;

	while (*(s + a))
	{
		while (*(accept + b))
		{
			if (*(accept + b) == *(s + a))
				c++;
			b++;
		}
		b = 0;
		a++;
		if (*(s + a) == ' ')
			break;
	}
	return (c);
}
