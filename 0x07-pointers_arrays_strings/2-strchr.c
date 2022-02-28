#include "main.h"
#include <stddef.h>
/**
*_strchr - locates a character in a string
*@s: string to check
*@c: character to check
*Return: Null if character is in the string or pointer
*to the first ocurrence of c
*/
char *_strchr(char *s, char c)
{
	if (!s)
		return ("error\n");

	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
