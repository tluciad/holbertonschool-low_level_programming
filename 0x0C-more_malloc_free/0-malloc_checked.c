#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *malloc_checked - function that allocates memory using malloc
 *@b: var type int which is the size of the malloc
 *Return: p if malloc worked, otherwise exit with value 98
 **/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
