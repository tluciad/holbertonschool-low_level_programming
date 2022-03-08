#include "main.h"
/**
*_memcpy - copies memory area
*@src: second pointer
*@n: input parameter
*@dest: first pointer
*Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *sre = dest;
	unsigned int j = 0;

	if (!dest || !src)
		return ("error/n");

	while (j < n)
	{
		*dest = *src;
		dest++;
		src++;
		j++;
	}
	return (sre);
}
