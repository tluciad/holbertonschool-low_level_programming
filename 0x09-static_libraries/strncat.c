#include "main.h"
/**
*_strncat - function that concatenates two strings.
*@dest: input parameter
*@src:  input parameter
*@n: n bytes from src
*Return: pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
		int i = 0;
		char *s = dest;

		while (*dest != '\0')
		{
			dest++;
		}

		while (*src != '\0' && i < n)
		{
			*dest = *src;
			dest++;
			src++;
			i++;
		}
	return (s);
}
