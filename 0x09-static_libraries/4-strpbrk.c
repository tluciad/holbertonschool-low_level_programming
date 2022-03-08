#include "main.h"
#include <stddef.h>

/**
* _strpbrk - searches a string for any of a set of bytes
* @s : string to be scanned
* @accept: string with character to match
* Return: s or NULL
*/
char *_strpbrk(char *s, char *accept)
{

	unsigned int a = 0, b = 0;

	while (*(s + a))
	{
		while (*(accept + b))
		{
			if (*(accept + b) == *(s + a))
				return (s + a);
			b++;
		}
		b = 0;
		a++;
	}
	return (NULL);
}
