#include "main.h"

/**
 * get_bit - function that sets the value of a bit to 1 at a given index
 *@n: binary number to check
 *@index: the given index
 * Return: value of the bit at index index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	return ((n >> index) & 1);
}
