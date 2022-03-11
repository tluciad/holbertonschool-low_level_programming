#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b;
	char *p;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	p = malloc((a + b)sizeof(char));

	for (a = 0; s1[a]; a++)
	{
		p[a] = s1[a];
	}
	for (a = 0; s2[a]; a++)
		p[b] = s2[b];
	a++;

	if (!p)
		return (NULL);

	p[a] = '\0';

	return (p);
}
