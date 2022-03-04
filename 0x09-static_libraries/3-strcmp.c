#include "main.h"
/**
*_strcmp - compares two strings
*@s2: string to compare
*@s1: string to compare
*Return: (j)
*/

int _strcmp(char *s1, char *s2)
{
	int j = 0;

	while (*s1 != '\0' && *s2 != '\0' && j == 0)
	{
		j = (int) (*s1 - *s2);
		s1++;
		s2++;
	}
		return (j);
}
