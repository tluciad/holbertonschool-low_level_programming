#include "main.h"
/**
*_isalpha - check for alphabet character
*@c: the character to check
*Return: (1) if is lowercase or uppercase (0) otherwise
*/
int _isalpha(int c)
{
		if (c >= 'a' && c <= 'z')
		{
			return (1); }
		else if (c >= 'A' && c <= 'Z')
		{
			return (1); }

		return (0);
}
