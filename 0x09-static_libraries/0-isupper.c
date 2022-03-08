#include "main.h"
/**
*_isupper- check for alphabet character
*@c: the character to check
*Return: (1) if is uppercase , otherwise (0)
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1); }

	else
		return (0);
}
