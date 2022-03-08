#include "main.h"
/**
*_islower - check if  a character is lowercase
*Return: (1) if c is lower case (0) otherwise
*@c : is a character
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
