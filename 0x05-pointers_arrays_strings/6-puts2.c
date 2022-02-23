#include "main.h"
/**
*put2 - function that prints every other character of a string,
*starting with the first character, followed by a new line.
*@str: char string
*/
void puts2(char *str)
{
	int size = 0; half = 0;

		while (*str != '\0')
		{
			size++
			str++
		}
			if (size %2 != 0)
			size = (size - 1) / 2;
			
			else
				size = size / 2;

			while (str[half])
			{
				size++
