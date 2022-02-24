#include "main.h"
/**
*string_toupper - changes all lowercase letters of a string to uppercase
*@char: char string
*@s: string
*Return: str
*/

char *string_toupper(char *s)
{
	char *str = s;

	while (*s)
	{
		if (*s >= 97 && *s <= 122)
			*s = (*s - 32);
		s++;
	}
	return (str);
}
