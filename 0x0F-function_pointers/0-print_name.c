#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Function that prints the name
 * @name: the name
 * @f: function point
 * Return : the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
