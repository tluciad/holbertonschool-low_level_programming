#include "main.h"
/**
*_strlen - calculate the length of a string
*@s: char string 1
*
*/
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length = length + 1;
		s = s + 1;
	}

	return (length);
}
