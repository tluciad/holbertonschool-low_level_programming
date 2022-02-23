#include "main.h"
/**
*_strcat - concatenate two strings
*@dest: input parameter
*@src: input parameter
*return: pounter to the result string
*/
char *_strcat(char *dest, char *src)
{
		char *s = dest;

		while (*dest != '\0')
		{
			dest++;
		}
		while (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}
		*dest = '\0';
		return (s);
}
