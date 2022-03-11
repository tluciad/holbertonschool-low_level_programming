#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - check the code
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	char *a;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}
	a = malloc(sizeof(char) * strlen(s1) + n + 1);
	if (!a)
	{
		return (NULL);
	}
	for (; i < (strlen(s1) + n); i++)
	{
		if (i < strlen(s1))
		{
			a[i] = s1[i];
		}
		else
		{
			a[i] = s2[j++];
		}
	}
	a[i] = '\0';
	return (a);
}
