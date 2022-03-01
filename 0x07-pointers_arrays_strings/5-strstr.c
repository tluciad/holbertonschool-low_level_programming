#include "main.h"
#include <stddef.h>
/**
*_strstr - locates a substring
*@haystack: main string to examinate
*@needle: substring to be search
*Return: beginning of the located substring or NULL
*/
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	char *ret;

	ret = NULL;
	j = 0;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[j] == haystack[i])
		{
			ret = &haystack[i - 1];
			while (needle[j] != '\0' && haystack[i] != '\0')
			{
				if (needle[j] == haystack[i])
				{
					i++;
					j++;
				}
				else
					break;
			}
			if (needle[j] != '\0')
				ret = NULL;
		}
	}
	if (needle[0] != '\0')
		return (ret);
	else
		return (haystack);
}
