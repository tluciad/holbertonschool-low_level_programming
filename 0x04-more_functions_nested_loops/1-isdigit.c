#include "main.h"
/**
*_isdigit - check if a character is a digit
*Return: (1) if c is a digit (0) otherwise
*@c : is a character
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
