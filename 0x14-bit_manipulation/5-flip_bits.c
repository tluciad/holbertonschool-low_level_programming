#include "main.h"
/**
 * flip_bits - function that returns the number of bits you
 * would need to flip to get from one number to another
 * @n: number parameter
 * @m: number parameter
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbt;

	for (nbt = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbt++;
	}

	return (nbt);
}
