#include "main.h"
/**
*rev_string - function that reverses a string.
*@s : pointer char
*Return : (void)
*/
void rev_string(char *s)
{
		char ac;
		int i = 0;
		int j = 0;

	while (s[i] != '\0')
		i++;

	i--;
	while (j <= i)
	{
		ac = s[j];
		s[j] = s[i];
		s[i] = ac;
		i--;
		j++;
	}
}
