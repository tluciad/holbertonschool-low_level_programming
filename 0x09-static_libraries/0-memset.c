#include "main.h"
/**
*_memset - fills memory with a constant byte
*@s: size of memory
*@b: the address of memory
*@n: bytes of memory
*Return: pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j = 0;

	if (!s)
		return ("error /n");

	while (j < n)
	{
		s[j] = b;
		j++;
	}
	return (s);
}
